#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    c=a,d=b;
    printf("新增一組帳密\n");
    printf("帳號");
    scanf("%d",&a);
    printf("密碼");
    scanf("%d",&b);
    printf("輸入帳號");
    scanf("%d",&c);
    printf("輸入密碼");
    scanf("%d",&d);
    while(c!=a||d!=b){
    	printf("失敗\n");  
    	printf("輸入帳號");
    	scanf("%d",&c);
    	printf("輸入密碼");
		scanf("%d",&d);
	}
	
	printf("登入");
		
	
	return 0;
}
