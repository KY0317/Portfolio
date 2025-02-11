#include<stdio.h>
int main(void)
{
int M,D;
int sum;
printf("請輸入月日\n");
scanf("%d%d",&M,&D);
sum=(M*2+D)%3;
printf("%d\n",sum);
if(sum==0){
	printf("普通\n");
}
else if(sum==1){
	printf("吉\n");
}
else{
	printf("大吉\n");
}


return 0;
}
