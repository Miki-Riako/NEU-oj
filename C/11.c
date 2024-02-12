#include <stdio.h>

int maxDivision(int m, int n);
int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int division = maxDivision(m, n);
    int multiple = m * n / division;
    printf("%d %d\n", division, multiple);
}

int maxDivision(int m, int n)
{
    int theBigger = (m > n)? m : n;
    int division  = (m > n)? n : m;
    while (theBigger % division != 0)
    {
        int temp = division;
        division  = theBigger % division;
        theBigger = temp;
    }
    return division;
}
