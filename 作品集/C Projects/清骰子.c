#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a,count=0,c=6,d,i,m;//a�q�� count�p�⦸�� c���a��X�� d���a�몺�Ʀr 
	srand(time(NULL));
	while(c>0)
	{
		count++;
		printf("��%d��\n",count);
		a=(rand()%6)+1;	
		printf("�q���D��:%d\n",a);//�q���몺�I��
		printf("���a:");
		for(i=1,m=0;i<=c;i++)
		{
			d=(rand()%6)+1;
			printf("%d ",d);
			if(d==a)
			{
				m++;
			}
			
		}
		printf("\n\n");
		c=c-m;	
		
	}
	

} 	

