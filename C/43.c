#include <stdio.h>

void sort(int *x, int *y, int *z);

int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    sort(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);
}

void sort(int *x, int *y, int *z)
{
    if (*x > *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        int temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        int temp = *y;
        *y = *z;
        *z = temp;
    }
}
