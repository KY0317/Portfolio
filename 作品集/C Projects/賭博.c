#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
enum Status{CONTINUE,WON,LOST};
int rollDice(void);
int main(void)
{
	int sum;
	int mypoint;
	enum Status gameStatus;
	srand(time(NULL));
	sum=rollDice();
	switch(sum)
	{
		case 7://7 is a winner
		case 11://11 is a winner
			gameStatus=WON;
		break;
		case 2://2 is a loser
		case 3://3 is a loser
		case 12://12 is a loser
			gameStatus=LOST;
		break;
		default:
		gameStatus=CONTINUE;
		mypoint=sum;
		printf("point is %d\n",mypoint);
		break;		
	}
	while(CONTINUE==gameStatus)
	{
		sum=rollDice();
		if(sum==mypoint)
		{
			gameStatus=WON;
		}
		else
		{
			if(7==sum)
			{
				gameStatus=LOST;
			}
		}
		
	}
	if(WON==gameStatus)
	{
		printf("player wins");
	}
	else
	{
		printf("player loses");
	}
}	
	int rollDice(void)
	{
		int die1;
		int die2;
		int worksum;
		die1=1+(rand()%6);
		die2=1+(rand()%6);
		worksum=die1+die2;
		printf("player %d+%d=%d\n",die1,die2,worksum);
		return worksum;
	}
