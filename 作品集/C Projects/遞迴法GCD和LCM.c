#include<stdio.h>
int f(int a,int b);
int g(int a,int b);
int main(void)
{
	int a,b;
	printf("輸入兩個數字");
	scanf("%d%d",&a,&b);
	printf("GCD:%d\n",f(a,b));
	printf("LCM:%d",g(a,b));
}
int f(int a,int b)//gcd
{
	if(b==0)
	return a;
	else
	return f(b,a%b);
}
int g(int a,int b)//lcm
{
	if(b==0)
	return a;
	else
	return a*b/f(a,b);
}
