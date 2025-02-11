#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("¿é¤J1~9\n");
	scanf("%d",&n);
	if(n==0||n>=10)
	{
		printf("¿é¤J¿ù»~");	
		return 0;
	}
	for(i=1;i<=n;i++)  
    {  
        k=n-i;  
        for(j=1;j<=n-i;j++)  
        {  
            printf(" ");  
        }  
        for(j=1;j<=i;j++)  
        {
			printf("%d",j);
		} 
        for(j=i-1;j>=1;j--)  
        {
			printf("%d",j);
		}  
        for(j=1;j<=n-i;j++)  
        {  
            printf(" ");  
        }  
        printf("\n");  
    }  
    for(i=n-1;i>=1;i--)  
    {  
        k=n-i;  
        for(j=1;j<=n-i;j++)  
        {  
            printf(" ");  
        }  
        for(j=1;j<=i;j++)  
        {
			printf("%d",j);
		} 
        for(j=i-1;j>=1;j--)  
        {
		 	printf("%d",j);
		}  
        for(j=1;j<=n-i;j++)  
        {  
            printf(" ");  
        }  
        printf("\n");  
    }    
}
