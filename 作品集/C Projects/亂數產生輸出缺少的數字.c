#include<stdio.h>
#include<time.h>
int main(void)
{
	int a[10],i,b,j;	
	srand(time(NULL));
	printf("[¶Ã¼Æ]\n");
	for(i=0;i<10;i++)
	{
		a[i]=(rand()%20)+1;
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("[¯Ê¤Ö¼Æ]\n");
	for(b=1;b<=20;b++)
	{
		for(j=0;j<10;j++)
		{
			if(b==a[j])
				break;
		}
		if(j==10)
			printf("%d ",b);
	}
} 
