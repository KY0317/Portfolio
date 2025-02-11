#include <stdio.h>
#include <stdlib.h>
void f(int n,int A,int B,int C);
int time = 0;
int main(void)
{
    int n;
    printf("請輸入河內塔的高度：");
    scanf("%d", &n);
    f(n, 'A', 'B', 'C');
    printf("移動 %d 層河內塔共需移動 %d 次\n", n, time);
    system("pause");
}

void f(int n,int A,int B,int C)
{
    if (n == 1)
    {
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, A, C);
    }
    else
    {
        f(n - 1, A, C, B);
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, A, C);
        f(n - 1, B, A, C);
    }
}
