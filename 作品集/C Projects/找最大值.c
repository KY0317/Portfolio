#include<stdio.h>
int main()
{
	int counter,number,largest=0;
	printf("�s���J10�ӫD��Ƽƭȧ�̤j��");
	for(counter=1;counter<=10;counter++)
	{
		printf("\n��J��%d:",counter);
		scanf("%d",&number);
		if(number>largest)
		{
			largest=number;		
		}	
	}
	printf("�̤j��%d",largest);	
}
