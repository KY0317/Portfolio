#include<stdio.h>
int f();
int g();
int main(void)
{
	int b;
	printf("尼ん地ん锣传\n");
	printf("尼ん放锣地ん1\n");
	printf("地ん放锣尼ん2\n");
	scanf("%d",&b);
	if(b==1)
	{
		f();
	}
	if(b==2)
	{
		g();
	}
}
int f()
{
	int a;
	float b;
	printf("块尼ん放:");
	scanf("%d",&a);
	printf("地ん放:%.1f",b=(a*9/5)+32);
	return b;	
}
int g()
{
	int a;
	float b;
	printf("块地ん放:");
	scanf("%d",&a); 
	printf("尼ん放:%.1f",b=(a-32)*5/9);
	return b;	
}
