#include<stdio.h>
int main(void)
{
	int a=0,b=100,x=47,c;
	
	printf("0<x<100\n�вqx��");
	scanf("%d",&c);
	while(c!=x)
	{ 
		if(c>x)
		{	
			b=c;
			printf("%d<x<%d\n",a,b);
			printf("�вqx��");
			scanf("%d",&c);	
		}
		else if(c<x)
		{
			a=c;
			printf("%d<x<%d\n",a,b);
			printf("�вqx��");
			scanf("%d",&c);	
		}
		
	} 
	printf("��J���T");

} 
