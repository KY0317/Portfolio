#include<stdio.h>
#define size 10 
int main(void)
{
	int A[size][size]={0},B[size][size]={0},sum[size][size]={0};
	int i,j,n1,m1;
	printf("��J��x�}���j�p:");
	scanf("%d%d",&n1,&m1);
	printf("�b�Ĥ@�ӯx�}����J����:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("����-[%d],[%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("�b�ĤG�ӯx�}����J����:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("����-[%d],[%d]",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	printf("�Ĥ@�ӯx�}�O:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}	
	
	printf("�ĤG�ӯx�}�O:\n");
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
	printf("��ӯx�}���[�k�O:\n");
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
