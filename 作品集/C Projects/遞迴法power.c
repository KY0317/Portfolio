#include<stdio.h>
#include<math.h>
int power(int a,int b);
int main(void)
{
	int a,b;
	printf("��J��ӼƦr");
	scanf("%d%d",&a,&b);
	printf("%d��%d����:%d\n",a,b,power(a,b));
}
int power(int a,int b)
{
	if(b==0)
	return 1;
	else
	return a*power(a,b-1);
}

