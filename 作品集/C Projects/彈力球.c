#include<stdio.h>
float f(float n);
int main(void)
{
	float n;//n�_�l����   
	printf("��J�_�l����");
	scanf("%f",&n);
	printf("�`�첾:%.2f",n+f(n));
} 
float f(float n)
{	 
	if(n/2<1)
	return 0;
	else
	return n+f(n/2);
}
