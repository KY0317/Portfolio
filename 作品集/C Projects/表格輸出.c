#include<stdio.h>
int main(void)
{
	int A;
	printf("A\tA+3\tA+6\tA*9\n");
	for(A=7;A<=35;A+=7){
	printf("%d\t%d\t%d\t%d\n",A,A+3,A+6,A*9);
	}

}
