#include <stdio.h>

int main(void)
{
    int a, b, c;
    float sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    for (int i = 1; i <= b; i++)
    {
        sum += i * i;
    }
    for (int i = 1; i <= c; i++)
    {
        sum += 1 / (float)i;
    }
    printf("%.2f", sum);
}
