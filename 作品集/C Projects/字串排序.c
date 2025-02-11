#include<stdio.h>
#include<string.h>
void str_len(char str[]){
	int len=strlen(str),i,j;
	for(i=len-1;i>0;i--){
		for(j=0;j<i;j++){
			if(str[j]>str[i]){
				int temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
		}
	}
}
int main(void){
	char str[]="Hello!! How are you?? I'm Fine. No Thank you.";
	str_len(str);
	//printf("%s",str);
	return 0;
} 
