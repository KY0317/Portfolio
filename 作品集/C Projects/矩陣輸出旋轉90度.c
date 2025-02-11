#include<stdio.h>
#define size 10
int main(void)
{
	int A[size][size]={0};
	int i,j,n;
	printf("輸入列:\n");
	printf("輸入矩陣大小:");
	scanf("%d",&n);
	printf("在第一個矩陣中輸入元素:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("元素-[%d],[%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("輸出列:\n");
	printf("矩陣為:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("轉置後的矩陣為:\n");
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			printf("%d ",A[j][i]);
		}
		printf("\n");
	}	
	return 0;
}
