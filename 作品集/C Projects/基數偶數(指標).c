#include<stdio.h>
void split(int *arr,int *odd,int *even)
{
	int i=0,j=0,k=0;
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			*(odd+k++)=*(arr+i);
		}
		else
		{
			*(even+j++)=*(arr+i);
		}
	}	
	printf("奇數陣列為:");
	for(k=0;k<5;k++)
	{
		printf("%d ",*(odd+k));
	}
	printf("\n");
	printf("偶數陣列為:");
	for(j=0;j<5;j++)
	{
		printf("%d ",*(even+j));
	}

}
int main(void)
{
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	int odd[5], even[5];
	split(&arr,&odd,&even);
} 
