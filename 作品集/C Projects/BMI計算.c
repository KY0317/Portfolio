#include<stdio.h>
int main(void)
{
	int c;
    float a,b,BMI;
    while(c==1){
	printf("請輸入體重(kg)\n身高(m)\n");
    scanf("%f%f",&a,&b);
    printf("BMI%.2f\n",BMI=(a/(b*b)));
    if(BMI<18.5){ 
		printf("體重過輕\n");
	} 
    else if(BMI<=24){
		printf("正常\n");
	}
    else{
		printf("體重過重\n");
	}
	printf("是否繼續計算BMI(0/1)?");
	scanf("%d",&c);
	} 
}
