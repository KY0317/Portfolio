#include<stdio.h>
int main(void)
{
	int m,n,p;
	int a[99][99],b[99][99],c[99][99];
	int i,j,k;
	printf("Enter the number of rows and columns for the first matrix: ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of first matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the number of rows and columns for the second matrix: ");
	scanf("%d%d",&n,&p);	
	printf("Enter the elements of the second matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d ",c[i][j]);	
		}
		printf("\n");
	}

	
} 
