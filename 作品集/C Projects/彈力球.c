#include<stdio.h>
float f(float n);
int main(void)
{
	float n;//n起始高度   
	printf("輸入起始高度");
	scanf("%f",&n);
	printf("總位移:%.2f",n+f(n));
} 
float f(float n)
{	 
	if(n/2<1)
	return 0;
	else
	return n+f(n/2);
}
