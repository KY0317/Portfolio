#include<stdio.h>
int main()
{
	int counter,number,largest=0,n=0;
	printf("�s���J10�ӫD��Ƽƭȧ��ӳ̤j��");
	for(counter=1;counter<=10;counter++)
	{
		printf("\n��J��%d:",counter);
		scanf("%d",&number);
		if(number>largest)
		{
			n=largest; 
			largest=number;	
		}
		else if(number>n)
		{
			n=number;
		}	
	}
	printf("�̤j��%d,%d",largest,n);	
}
