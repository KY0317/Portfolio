#include<stdio.h>
#define size 10 
void A(int *arr1,int *arr2,int *sum)
{
	int i=0,j=0;
	for(i=0;i<=99;i++)
	{
		for(j=0;j<=99;j++)
		{
			*(sum+(99*i)+j)=*(arr1+(99*i)+j)+*(arr2+(99*i)+j); 
		}
	}
}
int main(void)
{
	int arr1[99][99]={0},arr2[99][99]={0},sum[99][99]={0};
	int i,j,n1,m1;
	printf("��J��x�}���j�p:");
	scanf("%d%d",&n1,&m1);
	printf("�b�Ĥ@�ӯx�}����J����:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("����-[%d],[%d]",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("�b�ĤG�ӯx�}����J����:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("����-[%d],[%d]",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("�Ĥ@�ӯx�}�O:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}	
	
	printf("�ĤG�ӯx�}�O:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	A(&arr1[0][0],&arr2[0][0],&sum[0][0]);
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
