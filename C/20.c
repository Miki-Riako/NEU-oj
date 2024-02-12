#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int sum = 1;
    for (int i = 1; i < N; i++)
    {
        sum++;
        sum *= 2;
    }
    printf("%d", sum);
}
