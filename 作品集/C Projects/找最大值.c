#include<stdio.h>
int main()
{
	int counter,number,largest=0;
	printf("硈尿块10獶俱计计т程");
	for(counter=1;counter<=10;counter++)
	{
		printf("\n块%d:",counter);
		scanf("%d",&number);
		if(number>largest)
		{
			largest=number;		
		}	
	}
	printf("程%d",largest);	
}
