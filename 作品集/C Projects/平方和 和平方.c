#include<stdio.h>
int main()
{
	int a,b;
	printf("輸入兩個數字\n");
	scanf("%d%d",&a,&b);
	printf("平方和%d\n",a*a+b*b);
	printf("和平方%d\n",a*a+2*a*b+b*b);
	return 0;
}
