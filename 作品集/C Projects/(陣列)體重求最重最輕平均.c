#include<stdio.h>
int main(void)
{
	int a[100],i,average,sum,x,b,max=0,min=9999;
		for(b=0;b<=x;b++)
		{
			printf("��J�魫:");
			scanf("%d",&x);
			while(x>0)
			{
				a[i]=x;
				printf("��J�魫:");
				scanf("%d",&x);	
				sum+=a[i];
				if(a[i]>max)
				{
					max=a[i];
				}
				if(a[i]<min)
				{
					min=a[i];
				}
				b++;
			}
		}
			average=sum/(b-1);
		 
		printf("�̭�: %d,�̻�: %d,����: %d",max,min,average);
}
