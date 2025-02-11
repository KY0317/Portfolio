#include<stdio.h> 
int main(void)
{
	int data1[10]={10,15,22,45,9,66,71,4,37,82};
	int data2[10]={0};
	int *p1, *p2, i; 
	int count=0;
	p1=data1;
	p2=data2;
	for(i=0;i<10;i++)
	{
		if(*(p1+i)%2!=0)
		{
			*p2++ = *(p1+i);
			count++;
		}
	}
	for(i=0,p2=data2;i<count;i++)
	{
		printf("%d ",*(p2+i));
	}
}
