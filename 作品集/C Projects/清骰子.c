#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a,count=0,c=6,d,i,m;//a電腦 count計算次數 c玩家骰幾次 d玩家骰的數字 
	srand(time(NULL));
	while(c>0)
	{
		count++;
		printf("第%d次\n",count);
		a=(rand()%6)+1;	
		printf("電腦主謀:%d\n",a);//電腦骰的點數
		printf("玩家:");
		for(i=1,m=0;i<=c;i++)
		{
			d=(rand()%6)+1;
			printf("%d ",d);
			if(d==a)
			{
				m++;
			}
			
		}
		printf("\n\n");
		c=c-m;	
		
	}
	

} 	

