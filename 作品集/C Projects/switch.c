#include<stdio.h>
int main(void)
{
	float alltotal;
	float total;
	int x,z;
 	printf("���~�s��\t�s���\n");
 	printf("1\t\t2.98\n");
 	printf("2\t\t4.50\n");
 	printf("3\t\t9.98\n");
 	printf("4\t\t4.49\n");
 	printf("5\t\t6.87\n"); 
	printf("�п�J�s�������Js����\n");
	for(z=1;z<=7;z++){
		printf("\n��%d��",z);
		printf("\n�п�J�s��\n");
		int Aa=0,Bb=0,Cc=0,Dd=0,Ee=0;
		while((x=getchar()) !='s'){
			switch(x){
				case '1':
				printf("��J�ƶq");
				scanf("%d",&Aa);
				break;
				case '2':
				printf("��J�ƶq");
				scanf("%d",&Bb);
				break;
				case '3':
				printf("��J�ƶq");
				scanf("%d",&Cc);
				break;
				case '4':
				printf("��J�ƶq");
				scanf("%d",&Dd);	
				break;
				case '5':
				printf("��J�ƶq");		
				scanf("%d",&Ee);
				break;
			}
		}
		total=Aa*2.98+Bb*4.50+Cc*9.98+Dd*4.49+Ee*6.87;
		alltotal=alltotal+(Aa*2.98+Bb*4.50+Cc*9.98+Dd*4.49+Ee*6.87);
		printf("������Q:%.2f",total);
		printf("�`��Q:%.2f",alltotal);
	}	
	return 0;
} 

