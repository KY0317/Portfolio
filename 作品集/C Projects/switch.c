#include<stdio.h>
int main(void)
{
	float alltotal;
	float total;
	int x,z;
 	printf("產品編號\t零售價\n");
 	printf("1\t\t2.98\n");
 	printf("2\t\t4.50\n");
 	printf("3\t\t9.98\n");
 	printf("4\t\t4.49\n");
 	printf("5\t\t6.87\n"); 
	printf("請輸入編號直到輸入s為止\n");
	for(z=1;z<=7;z++){
		printf("\n第%d天",z);
		printf("\n請輸入編號\n");
		int Aa=0,Bb=0,Cc=0,Dd=0,Ee=0;
		while((x=getchar()) !='s'){
			switch(x){
				case '1':
				printf("輸入數量");
				scanf("%d",&Aa);
				break;
				case '2':
				printf("輸入數量");
				scanf("%d",&Bb);
				break;
				case '3':
				printf("輸入數量");
				scanf("%d",&Cc);
				break;
				case '4':
				printf("輸入數量");
				scanf("%d",&Dd);	
				break;
				case '5':
				printf("輸入數量");		
				scanf("%d",&Ee);
				break;
			}
		}
		total=Aa*2.98+Bb*4.50+Cc*9.98+Dd*4.49+Ee*6.87;
		alltotal=alltotal+(Aa*2.98+Bb*4.50+Cc*9.98+Dd*4.49+Ee*6.87);
		printf("今日獲利:%.2f",total);
		printf("總獲利:%.2f",alltotal);
	}	
	return 0;
} 

