#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    float mother = 1;
    float son = 2;
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        int temp = son;
        sum += son / mother;
        son += mother;
        mother = temp;
    }
    printf("%.2f", sum);
}
