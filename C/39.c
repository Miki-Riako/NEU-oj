#include <stdio.h>
#define LEAP_YEAR(y) (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))

int main(void)
{
    int y;
    scanf("%d", &y);
    if (LEAP_YEAR(y))
    {
        printf("L\n");
    }
    else printf("N\n");
}
