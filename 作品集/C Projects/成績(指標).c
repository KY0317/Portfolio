#include<stdio.h>

f(int *p)
{
	int i;
	printf("No.| 英文 數學 | 合計\n");
	for(i=0;i<5;i++)
	{
		*(p+i*3+2)+=*(p+i*3+0)+*(p+i*3+1);
		printf(" %d |  %d   %d  | %d\n",i+1,*(p+i*3+0),*(p+i*3+1),*(p+i*3+2));
		
	}
}

int main(void)
{
	int arr[5][3]={{88,65,0},{92,86,0},{78,80,0},{70,65,0},{88,78,0}};
	f((int *)arr); //轉一維 
}
