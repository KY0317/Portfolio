#include<stdio.h>
#include<string.h>
int main(){
	char str[]=" @@ Aab, ~bccdD>> e";
	char D[99];
	int i,j;
	int len=strlen(str);
	for(i=0,j=0;i<len;i++)
	{
		if((65<=str[i]&&str[i]<=90)||(97<=str[i]&&str[i]<=122)) 
		{
			D[j++]=str[i];
		}  
	}
	D[j]='\0';
	printf("\n%s",D);
	return 0;
} 
