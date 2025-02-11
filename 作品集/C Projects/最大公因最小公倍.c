#include<stdio.h>
int A(int a,int b);
int B(int a,int b);
int main(void)
{
	int a,b,c,x;
	printf("块Ω计:");
	scanf("%d",&x);
	for(a=1;a<=x;a++)
	{
		printf("块ㄢ俱计:");
		scanf("%d%d",&b,&c);
		printf("程そ计:%d\n",A(b,c));
		printf("程そ计:%d\n",B(b,c));
	}
}
int A(int a,int b)//a琌砆埃Αb琌埃Α–埃Ω砆埃Α㎝埃Αが传讽砆埃0埃Α单程そ计 
{
	int t;
	while( b!=0 )
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a; 
}
int B(int a,int b)
{
	return a*b/A(a,b);
}
