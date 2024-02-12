#include <stdio.h>

int main(void)
{
    int array[10];
    scanf("%d %d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9]);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[9 - i]);
    }
    printf("\n");
}
