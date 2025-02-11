#include<stdio.h>
int main(void)
{	
	int a[10],sum=0;
	int i;
	for(i=0;i<10;i++)
	{
		printf("¿é¤J¼Æ¦r");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("TOTAL: %d",sum);
} 
