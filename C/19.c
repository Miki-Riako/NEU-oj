#include <stdio.h>

int main(void)
{
    int M, n;
    scanf("%d %d", &M, &n);
    float heigh = (float)M;
    float sum = -heigh;
    for (int i = 0; i < n; i++)
    {
        sum += heigh * 2;
        heigh /= 2;
    }
    printf("%.2f %.2f", heigh, sum);
}
