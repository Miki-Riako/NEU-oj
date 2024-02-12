#include <stdio.h>
#include <math.h>

int main(void)
{
    for (int counting = 100; counting < 1000; counting++)
    {
        int hundreds = counting / 100;
        int tens = (counting - (hundreds * 100)) / 10;
        int ones = counting - (hundreds * 100) - (tens * 10);
        if (pow(ones, 3) + pow(tens, 3) + pow(hundreds, 3) == counting)
        {
            printf("%d\n", counting);
        }
    }
}
