#include<stdio.h>
int main()
{
	int counter,number,largest=0,n=0;
	printf("硈尿块10獶俱计计тㄢ程");
	for(counter=1;counter<=10;counter++)
	{
		printf("\n块%d:",counter);
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
	printf("程%d,%d",largest,n);	
}
