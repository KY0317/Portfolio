#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=9;a++)
	{
		printf("\n");
		for(b=1;b<=9;b++)
		{
			c=a*b;
			printf("%d*%d=%d\t",a,b,c);
		}
	} 
}

