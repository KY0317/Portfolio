#include<stdio.h>
int main()
{
	int a;
	float b; 
	printf("1-�g�z�H��(�T�w�g�~10000��)\n");
	printf("2-���~�u(�C�g�u�ɦb40�p�ɤ��A�H�C�p�ɤu��110���p��F�W�L40�p�ɪ������A�H�C�p�ɤu��1.5���p��)\n");
	printf("3-������u(�g�~��250���[�W��g�P����B��5.7%%)\n");
	printf("4-�s�u(���C�g�Ͳ���ƭp��A�C��50��)\n");
	printf("�п�J�~��N�X�����J-1����\n"); 
	do{ 
		printf("�N�X\n");
		scanf("%d",&a); 
		switch(a)
		{
			case 1:
			printf("�g�~:10000.0��\n");
			break;
			case 2:
			printf("��g�ɼ�\n");
			scanf("%f",&b);
			if(b<=40&&b>=0)
			{
				printf("�g�~:%.1f��\n",b*110);	
			}
			else if(b>40)
			{
				printf("�g�~:%.1f��\n",b*(110*1.5));
			}
			break;	
			case 3:
			printf("��g�P����B\n");
			scanf("%f",&b);
			printf("�g�~:%.1f��\n",(b*0.057)+250);
			break;	
			case 4:
			printf("��g�Ͳ����\n");
			scanf("%f",&b);
			printf("�g�~:%.1f��\n",b*50);
			break;
			case -1:
			break;			
		}
	}while(a!=-1);
	printf("����"); 
}
