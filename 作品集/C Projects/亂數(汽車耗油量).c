#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int m;
float n,h;
printf("��J�o�c�e�q:");
scanf("%d",&m);
srand(time(NULL));
while(m!=-1)
{
	n=((rand()%100)/1000.0);
	printf("�o�Ӷq:%.2f\n",n);
	h=(m/n)/60;
	printf("���p:%.1f\n",h);
	printf("��J�o�c�e�q:");
	scanf("%d",&m);
}
} 
