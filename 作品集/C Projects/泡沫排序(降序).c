#include <stdio.h>
#include <time.h>
void sort(int arr[], int n){ //�ƨ禡�����}�C�ɭn�O�o�[[]�A���̭����ݭn�Ʀr; �ƨ禡�̭����ܼƴN��W�٩Mmain���ܼƤ@�ˡA���O�O��ӥ@�ɪ��F�� 
	int i, j, tmp;// i, j���p�ƾ�; tmp���Ȧs�� 
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			if(arr[i] > arr[j]){
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	printf("\n\n�Ƨǫᬰ:\n");
	for(i=0; i<n; i++){
		printf("%4d", arr[i]);
	}
	printf("\n\n");
}

int main(void){
	srand(time(NULL));
	int n, i; //n����J���Ʀr; i���p�ƾ� 
	printf("��J���ͶüƼƶq:");
	scanf("%d", &n);
	int arr[n];
	printf("�üƬ�:\n");
	for(i=0; i<n; i++){
		arr[i] = rand()%20+1;
		printf("%4d", arr[i]); //%4d��4�O�bcmd����ܮɦp�G�Ʀr�p��4��Ƥ]�O��4�Ӯ�l�A�i�H���ƪ��� 
	}
	sort(arr, n); // �}�C�ǤJ�ƨ禡�ɥu�n�W�r�N�n 
	
	system("pause");
	return 0;	
}
