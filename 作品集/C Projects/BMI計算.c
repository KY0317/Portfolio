#include<stdio.h>
int main(void)
{
	int c;
    float a,b,BMI;
    while(c==1){
	printf("�п�J�魫(kg)\n����(m)\n");
    scanf("%f%f",&a,&b);
    printf("BMI%.2f\n",BMI=(a/(b*b)));
    if(BMI<18.5){ 
		printf("�魫�L��\n");
	} 
    else if(BMI<=24){
		printf("���`\n");
	}
    else{
		printf("�魫�L��\n");
	}
	printf("�O�_�~��p��BMI(0/1)?");
	scanf("%d",&c);
	} 
}
