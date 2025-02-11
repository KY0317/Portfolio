#include<stdio.h>
int F();
int main(void)
{
	F();
} 
int F()
{
	int n;
	printf("給定一個自然數 n (0<=n<=45)，程式可重複輸入，直到輸入的n值為-1為止\n");
	while(n!=-1)
	{
		int i,n1=0,n2=1,n3=1;
		printf("Input:");
		scanf("%d",&n);
		if(0<=n&&n<=45)
		{
			for(i=0;i<=n;i++)
			{
				printf("%d ",n1);
				n1=n2;
				n2=n3;
				n3=n1+n2;
			}
			printf("\n");		
		}
		else if(n!=-1)
		{
			printf("0<=input<=45\n");
		} 
	} 
}
