#include<stdio.h>
int F();
int main(void)
{
	F();
} 
int F()
{
	int n;
	printf("���w�@�Ӧ۵M�� n (0<=n<=45)�A�{���i���ƿ�J�A�����J��n�Ȭ�-1����\n");
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
