#include<stdio.h>
int A(int m);
int main(void){
	int n,b=0;
	for(n=1;b<30;n++){
	if(A(n)==1){
		b++;
	}	
	} 
	printf("%d",n-1);
}
int A(int m){
	while(m%2==0){
		m/=2;
	}
	while(m%3==0){
		m/=3;
	}
	while(m%5==0){
		m/=5;
	} 
	if(m==1){
		return 1;
	}
	return 0;
}

