#include<stdio.h>
int F(int m);
int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d\n",F(a));
}
int F(int m)
{
	int b=1,sum=0;
	for(;m>0;b*=2,m/=10)
	{
		if(m%10==1)
		{
			sum+=b;
		}
	}
	return sum;	
} 
