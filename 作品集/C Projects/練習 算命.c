#include<stdio.h>
int main(void)
{
int M,D;
int sum;
printf("�п�J���\n");
scanf("%d%d",&M,&D);
sum=(M*2+D)%3;
printf("%d\n",sum);
if(sum==0){
	printf("���q\n");
}
else if(sum==1){
	printf("�N\n");
}
else{
	printf("�j�N\n");
}


return 0;
}
