#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int F(int m);
int main(void)
{
	srand(time(NULL));
	int a;
	a=(rand()%255)+1;
	printf("%d\n",a);
	printf("%d\n",F(a));
}
int F(int m)
{
	int b=1,sum=0;
	for(;m!=0;b*=10,m/=2)
	{
		if(m%2==1)
		{
			sum+=b;
		}
	}
	return sum;	
} 
