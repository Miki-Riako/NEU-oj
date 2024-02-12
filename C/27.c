#include <stdio.h>

int maxDivision(int m, int n);
int minMultiple(int m, int n);

int main(void)
{
    int numberOne, numberTwo;
    scanf("%d %d", &numberOne, &numberTwo);
    printf("%d %d", maxDivision(numberOne, numberTwo), minMultiple(numberOne, numberTwo));
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

int minMultiple(int m, int n)
{
    int division = maxDivision(m, n);
    int multiple = m * n / division;
    return multiple;
}
