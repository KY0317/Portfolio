#include<stdio.h>
#define size 10
int main(void)
{
	int A[size][size]={0};
	int i,j,n;
	printf("��J�C:\n");
	printf("��J�x�}�j�p:");
	scanf("%d",&n);
	printf("�b�Ĥ@�ӯx�}����J����:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("����-[%d],[%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("��X�C:\n");
	printf("�x�}��:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("��m�᪺�x�}��:\n");
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
