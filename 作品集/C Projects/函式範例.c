#include<stdio.h>
int f(int);
int g(int,int);
int main(){
	int a=8,b=13;
	printf("f(a)=%d\n",f(a));
	printf("f(b)=%d\n",f(b));
	printf("g(a,b)=%d\n",g(a,b));
}
int f(int n){		//在f(a)裡面輸入兩個數字a 在函式中會變成n
	if(n%2==1)
		return 1;	//函式回傳後後面就不會跑了 所以return 1之後後面的return 0就不會跑了 
	return 0;
}
int g(int n,int m){	//在g(a,b)裡面輸入兩個數字a,b 在函式中會變成n,m
	int x,y;
	x=n/2;
	y=m-5;
	return x+y;
} 
