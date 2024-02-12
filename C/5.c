#include <stdio.h>

int main(void)
{
    float F;
    scanf("%f", &F);
    float C = 5 * (F - 32) / 9;
    printf("c=%.2f\n", C);
}
