#include<stdio.h>
int f(int,int,int,int);
int count;
int main(){
	int n;
	scanf("%d",&n);
	f(n,1,2,3);
	printf("¦@²¾°Ê%d¦¸",count);
}
int f(int n,int a,int b,int c){
	if(n==1){
		printf("%d-->%d\n",a,c);
		count++;
		return;
	}
	f(n-1,a,c,b);
	f(1,a,b,c);
	f(n-1,b,a,c);
}
