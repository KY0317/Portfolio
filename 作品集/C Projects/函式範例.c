#include<stdio.h>
int f(int);
int g(int,int);
int main(){
	int a=8,b=13;
	printf("f(a)=%d\n",f(a));
	printf("f(b)=%d\n",f(b));
	printf("g(a,b)=%d\n",g(a,b));
}
int f(int n){		//�bf(a)�̭���J��ӼƦra �b�禡���|�ܦ�n
	if(n%2==1)
		return 1;	//�禡�^�ǫ�᭱�N���|�]�F �ҥHreturn 1����᭱��return 0�N���|�]�F 
	return 0;
}
int g(int n,int m){	//�bg(a,b)�̭���J��ӼƦra,b �b�禡���|�ܦ�n,m
	int x,y;
	x=n/2;
	y=m-5;
	return x+y;
} 
