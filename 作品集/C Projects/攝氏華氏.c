#include<stdio.h>
int f();
int g();
int main(void)
{
	int b;
	printf("���ؤ��ഫ\n");
	printf("���ū���ؤ��1\n");
	printf("�ؤ�ū�������2\n");
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
	printf("��J���ū�:");
	scanf("%d",&a);
	printf("�ؤ�ū�:%.1f",b=(a*9/5)+32);
	return b;	
}
int g()
{
	int a;
	float b;
	printf("��J�ؤ�ū�:");
	scanf("%d",&a); 
	printf("���ū׬�:%.1f",b=(a-32)*5/9);
	return b;	
}
