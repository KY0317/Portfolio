#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int m;
float n,h;
printf("輸入油箱容量:");
scanf("%d",&m);
srand(time(NULL));
while(m!=-1)
{
	n=((rand()%100)/1000.0);
	printf("油耗量:%.2f\n",n);
	h=(m/n)/60;
	printf("能行駛:%.1f\n",h);
	printf("輸入油箱容量:");
	scanf("%d",&m);
}
} 
