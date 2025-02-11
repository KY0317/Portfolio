#include<stdio.h>
int f(int x);
int main(void)
{
	int n,i;
	printf("input n:");
	scanf("%d",&n);
	while(n!=-1)
	{
		if(n<0||n>45)
			printf("error");
		else 
		{ 
			for(i=0;i<=n;i++)
			{
				printf("%d ",f(i));
			}	
			printf("\ninput n:");
			scanf("%d",&n);
		} 
	}
} 

int f(int x)
{
	if(x==0)
		return 0;
else	if(x==1||x==2)
		return 1;	
		return f(x-1)+f(x-2);
}

