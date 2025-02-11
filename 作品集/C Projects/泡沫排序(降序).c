#include <stdio.h>
#include <time.h>
void sort(int arr[], int n){ //副函式接收陣列時要記得加[]，但裡面不需要數字; 副函式裡面的變數就算名稱和main的變數一樣，但是是兩個世界的東西 
	int i, j, tmp;// i, j為計數器; tmp為暫存用 
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			if(arr[i] > arr[j]){
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	printf("\n\n排序後為:\n");
	for(i=0; i<n; i++){
		printf("%4d", arr[i]);
	}
	printf("\n\n");
}

int main(void){
	srand(time(NULL));
	int n, i; //n為輸入的數字; i為計數器 
	printf("輸入產生亂數數量:");
	scanf("%d", &n);
	int arr[n];
	printf("亂數為:\n");
	for(i=0; i<n; i++){
		arr[i] = rand()%20+1;
		printf("%4d", arr[i]); //%4d的4是在cmd裡顯示時如果數字小於4位數也是佔4個格子，可以做排版用 
	}
	sort(arr, n); // 陣列傳入副函式時只要名字就好 
	
	system("pause");
	return 0;	
}
