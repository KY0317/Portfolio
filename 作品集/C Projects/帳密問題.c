#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    c=a,d=b;
    printf("�s�W�@�ձb�K\n");
    printf("�b��");
    scanf("%d",&a);
    printf("�K�X");
    scanf("%d",&b);
    printf("��J�b��");
    scanf("%d",&c);
    printf("��J�K�X");
    scanf("%d",&d);
    while(c!=a||d!=b){
    	printf("����\n");  
    	printf("��J�b��");
    	scanf("%d",&c);
    	printf("��J�K�X");
		scanf("%d",&d);
	}
	
	printf("�n�J");
		
	
	return 0;
}
