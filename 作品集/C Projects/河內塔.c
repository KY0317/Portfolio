#include <stdio.h>
#include <stdlib.h>
void f(int n,int A,int B,int C);
int time = 0;
int main(void)
{
    int n;
    printf("�п�J�e���𪺰��סG");
    scanf("%d", &n);
    f(n, 'A', 'B', 'C');
    printf("���� %d �h�e����@�ݲ��� %d ��\n", n, time);
    system("pause");
}

void f(int n,int A,int B,int C)
{
    if (n == 1)
    {
        printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++time, n, A, C);
    }
    else
    {
        f(n - 1, A, C, B);
        printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++time, n, A, C);
        f(n - 1, B, A, C);
    }
}
