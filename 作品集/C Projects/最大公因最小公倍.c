#include<stdio.h>
int A(int a,int b);
int B(int a,int b);
int main(void)
{
	int a,b,c,x;
	printf("��J����:");
	scanf("%d",&x);
	for(a=1;a<=x;a++)
	{
		printf("��J��Ӿ��:");
		scanf("%d%d",&b,&c);
		printf("�̤j���]��:%d\n",A(b,c));
		printf("�̤p������:%d\n",B(b,c));
	}
}
int A(int a,int b)//a�O�Q�����Ab�O�����A�C���@���Q�����M���������A��Q����0�A��������̤j���]�� 
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
