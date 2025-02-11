#include<stdio.h>
int main()
{
	int a,b;
	printf("輸入第一個數:");
	scanf("%d",&a);
	printf("輸入第二個數:");
	scanf("%d",&b);
	printf("加總:%d\n",a+b);
	printf("相乘:%d\n",a*b);
	printf("相減:%d\n",a-b);
	printf("相除並取餘數:%d...%d\n",a/b,a%b);
	return 0;
}
