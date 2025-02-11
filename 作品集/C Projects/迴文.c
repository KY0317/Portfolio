#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[1001];
	int len, flag, i;

	while(scanf("%s",str) != EOF)
	{
		flag = 1;
		len = strlen(str);

		for(i = 0; i < len/2; i ++)
		{
			if(str[i] != str[len - 1 -i])
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			printf("Yes!\n");
		else
			printf("No!\n");
	}

	return 0;
}
