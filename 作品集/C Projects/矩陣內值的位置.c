#include<stdio.h>
#include<stdbool.h>
int main(){
	char c;
	int i=0,j=0;
	int size=-1,arr[99][99];
	int find=0;
	bool found=false;
	while(scanf("%d%c",&arr[i][j++],&c)==2){
		if(c=='\n'){
			if(i==0)
				size=j;
			i++,j=0;
		}
		if(i==size)
			break;
	}
	printf("輸入要搜尋的值：");
	scanf("%d",&find);
	printf("找到的值位置為：");
	for(i=0;i<size;i++)
		for(j=0;j<size;j++)
			if(arr[i][j]==find)
				printf("%d, %d\n",i+1,j+1),found=true;
	if(!found)
		printf("矩陣內沒該值");
}
