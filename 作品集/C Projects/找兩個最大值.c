#include<stdio.h>
int main()
{
	int counter,number,largest=0,n=0;
	printf("連續輸入10個非整數數值找兩個最大值");
	for(counter=1;counter<=10;counter++)
	{
		printf("\n輸入值%d:",counter);
		scanf("%d",&number);
		if(number>largest)
		{
			n=largest; 
			largest=number;	
		}
		else if(number>n)
		{
			n=number;
		}	
	}
	printf("最大值%d,%d",largest,n);	
}
