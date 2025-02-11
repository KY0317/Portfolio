#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int x=1,y,A[100]={0},n=0;
    printf("輸入列:\n");
    while(x!=0)
	{
        scanf("%d",&x);
        A[x%10]++;
        n++;
    }
    printf("輸出:\n");
    A[0]-=1;
    n-=1;
    for(y=0;y<=9;y++)
	{
        printf("尾數%d的比例:%.4f\n",y,(float)A[y]/n*100);

    }
}
