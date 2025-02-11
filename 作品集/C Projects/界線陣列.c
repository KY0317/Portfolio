#include<stdio.h>
int main()
{
	int a[10],i,l,r;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i-1]);
	}
	while(1)
	{ 
		printf("L R: ");
		scanf("%d%d",&l,&r);
		printf("ANS: ");
		for(i=0;i<10;i++)
		{
			if(a[i]>=l&&a[i]<=r)
			{
				printf("%d ",a[i]);
			}
		}
		printf("\n"); 
	} 
	return 0;
}
