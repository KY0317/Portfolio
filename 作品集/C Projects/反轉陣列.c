#include<stdio.h>
int main(void)
{
	int a[7],i;
	for(i=0;i<7;i++)
	{
		printf("input:");
		scanf("%d",&a[i]);
	}
	for(i=6;i>=0;i--)
	{
		printf("%d ",a[i]); 
	} 
}
 
