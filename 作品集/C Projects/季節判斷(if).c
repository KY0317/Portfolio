#include<stdio.h>
int main()
{
	int month;//輸入月份
	printf("輸入月份");
	while(month<13)
	{ 
		scanf("%d",&month);
		if(month<=5&&month>2)	
		{
			printf("春季\n");
			printf("輸入月份");
		}
		else if(month<=8&&month>5)
		{
			printf("夏季\n");
			printf("輸入月份");
		}
		else if(month<=11&&month>8)
		{
			printf("秋季\n");
			printf("輸入月份");	
		}
		else if(month==12||month==1||month==2)
		{
			printf("冬季\n");
			printf("輸入月份");		
		}
		else
		{
			printf("錯誤");	
		}
	} 
}
