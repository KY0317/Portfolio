#include<stdio.h>
int main()
{
	int month;//��J���
	printf("��J���");
	while(month<13)
	{ 
		scanf("%d",&month);
		if(month<=5&&month>2)	
		{
			printf("�K�u\n");
			printf("��J���");
		}
		else if(month<=8&&month>5)
		{
			printf("�L�u\n");
			printf("��J���");
		}
		else if(month<=11&&month>8)
		{
			printf("��u\n");
			printf("��J���");	
		}
		else if(month==12||month==1||month==2)
		{
			printf("�V�u\n");
			printf("��J���");		
		}
		else
		{
			printf("���~");	
		}
	} 
}
