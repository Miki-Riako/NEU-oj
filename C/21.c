#include <stdio.h>
int main(void)
{
    int X;
    scanf("%d", &X);
    float x = (float)X;
    float xPlus;
    while(1)
    {
        xPlus = (x + X / x) / 2;
        if ((x - xPlus < 0.00001) && (x - xPlus > -0.00001))
        {
            break;
        }
        x = xPlus;
    }
    printf("%.3f", xPlus);
}
