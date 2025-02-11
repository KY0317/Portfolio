#include<stdio.h>
#include<math.h>
int power(int a,int b);
int main(void)
{
	int a,b;
	printf("輸入兩個數字");
	scanf("%d%d",&a,&b);
	printf("%d的%d次方:%d\n",a,b,power(a,b));
}
int power(int a,int b)
{
	if(b==0)
	return 1;
	else
	return a*power(a,b-1);
}

