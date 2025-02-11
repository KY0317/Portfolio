#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=1;i<=5;i++)
	{
		printf("%d: ",i);
		scanf("%d",&a[i-1]); 
	} 
	while(a!=0)
	{
		printf("Q: ");
		scanf("%d",&i);
		if(i==0)
		{
			break;
		}
		printf("%d\n",a[i-1]);
	}
}
