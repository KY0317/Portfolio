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
	printf("��J�C:��J�T�ӼƦr:");
	scanf("%d%d%d",&a,&b,&c);
	multiple(&a,&b,&c);
	printf("\n���T������:");
	printf("%d %d %d",a,b,c);
}
