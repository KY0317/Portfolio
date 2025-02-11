#include<stdio.h>
int main(void)
{
	int x,c;
	int a,b=0;
	printf("輸入加總次數");
	scanf("%d",&x);
	for(a=1;a<=x;a++)
		{
			printf("INPUT:");
			scanf("%d",&c);
			b+=c;
		}
				printf("sum%d",b);
	



} 
