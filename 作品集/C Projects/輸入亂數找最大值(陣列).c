#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void MAX(int a[],int n);
void abcd(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void MAX(int a[],int n)
{
	int i;
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
	}
	printf("\n");
	printf("MAX: %d",max);
}
int main()
{
	srand(time(NULL));
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	abcd(a,n);
	MAX(a,n);
}

