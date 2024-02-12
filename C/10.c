#include <stdio.h>

int main(void)
{
    int I, bonus;
    bonus = 0;
    scanf("%d", &I);
    if (I <= 100000)
    {
        bonus = 0.1 * I;
    }
    else if (I <= 200000)
    {
        bonus = 10000 + 0.075 * (I - 100000);
    }
    else if (I <= 400000)
    {
        bonus = 25000 + 0.05 * (I - 200000);
    }
    else if (I <= 600000)
    {
        bonus = 35000 + 0.03 * (I - 400000);
    }
    else if (I <= 1000000)
    {
        bonus = 47000 + 0.015 * (I - 600000);
    }
    else bonus = 53000 + 0.01 * (I - 1000000);
    printf("%d\n", bonus);
}
