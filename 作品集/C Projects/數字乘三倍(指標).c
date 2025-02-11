#include<stdio.h> 
void multiple(int *x,int *y,int *z)
{
	*x=*x*3;
	*y=*y*3;
	*z=*z*3;
}
int main(void)
{
	int a,b,c;
	printf("輸入列:輸入三個數字:");
	scanf("%d%d%d",&a,&b,&c);
	multiple(&a,&b,&c);
	printf("\n乘三倍的數:");
	printf("%d %d %d",a,b,c);
}
