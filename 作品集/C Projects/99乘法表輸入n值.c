#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("¿é¤Jn­È:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("\n");
		for(b=1;b<=n;b++)
		{
			c=a*b;
			printf("%d*%d=%d\t",a,b,c);
		}
		printf("\n");
	} 
}
