#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    int step;
    scanf("%d", &step);
    int newArray[number];
    for (int i = 0; i < number; i++)
    {
        if (i - step < 0)
        {
            newArray[i] = array[i - step + number];
        }
        else newArray[i] = array[i - step];
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d ", newArray[i]);
    }
    printf("\n");
}
