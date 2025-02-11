#include<stdio.h>
#define size 10 
int main(void)
{
	int A[size][size]={0},B[size][size]={0},sum[size][size]={0};
	int i,j,n1,m1;
	printf("輸入方矩陣的大小:");
	scanf("%d%d",&n1,&m1);
	printf("在第一個矩陣中輸入元素:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("元素-[%d],[%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("在第二個矩陣中輸入元素:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("元素-[%d],[%d]",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	printf("第一個矩陣是:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}	
	
	printf("第二個矩陣是:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			sum[i][j]+=A[i][j]+B[i][j];
		}
	}
	printf("\n");
	printf("兩個矩陣的加法是:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}	
	return 0;
} 
