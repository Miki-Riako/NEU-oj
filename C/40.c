#include <stdio.h>

int main(void)
{
    float number;
    scanf("%f", &number);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%6.2f", number);
        }
        printf("\n", number);
    }
}
