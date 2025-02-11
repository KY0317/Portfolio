#include<stdio.h>
int main()
{
	int a;
	float b; 
	printf("1-經理人員(固定週薪10000元)\n");
	printf("2-時薪工(每週工時在40小時內，以每小時工資110元計算；超過40小時的部分，以每小時工資1.5倍計算)\n");
	printf("3-抽佣金工(週薪為250元加上當週銷售金額的5.7%%)\n");
	printf("4-零工(按每週生產件數計算，每件50元)\n");
	printf("請輸入薪資代碼直到輸入-1為止\n"); 
	do{ 
		printf("代碼\n");
		scanf("%d",&a); 
		switch(a)
		{
			case 1:
			printf("週薪:10000.0元\n");
			break;
			case 2:
			printf("當週時數\n");
			scanf("%f",&b);
			if(b<=40&&b>=0)
			{
				printf("週薪:%.1f元\n",b*110);	
			}
			else if(b>40)
			{
				printf("週薪:%.1f元\n",b*(110*1.5));
			}
			break;	
			case 3:
			printf("當週銷售金額\n");
			scanf("%f",&b);
			printf("週薪:%.1f元\n",(b*0.057)+250);
			break;	
			case 4:
			printf("當週生產件數\n");
			scanf("%f",&b);
			printf("週薪:%.1f元\n",b*50);
			break;
			case -1:
			break;			
		}
	}while(a!=-1);
	printf("結束"); 
}
