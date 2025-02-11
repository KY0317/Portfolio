#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a[11]={0},i,sum;
	int dice1,dice2;
	srand(time(NULL));
	for(i=1;i<=500;i++)
	{
		dice1=(rand()%6)+1;
		dice2=(rand()%6)+1;
		sum=dice1+dice2;
		a[sum-2]++;
	}
	for(sum=2;sum<=12;sum++)
	{
		printf("出現數字%d的次數: %d\n",sum,a[sum-2]);
	}
} 
