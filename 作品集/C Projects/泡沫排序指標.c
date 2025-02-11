#include <stdio.h>
#include <time.h>
void swap(int*n,int*m)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
}
int main(void)
{
	srand(time(NULL));
	int n,i,j;
	printf("輸入產生亂數數量:");
	scanf("%d", &n);
	int arr[n];
	printf("亂數為:\n");
	for(i=0;i<n;i++)
	{
		arr[i]=(rand()%100)+1;
		printf("%d ", arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	printf("\n\n排序後為:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
