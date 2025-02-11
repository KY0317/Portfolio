#include<stdio.h>
int f(int x);
int main(void)
{
	int n;
	printf("input n:");
	scanf("%d",&n);
	printf("\nsum = %d",f(n));
	return 0;
} 

int f(int x)
{
	if(x==0)
	return 1;
	else
	return x*f(x-1);
}
