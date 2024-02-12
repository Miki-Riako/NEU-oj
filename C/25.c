#include <stdio.h>

void bubbleSort(int array[], int length);
int main(void)
{
    int array[10];
    int insert;
    scanf("%d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8]);
    array[9] = insert;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
}

void bubbleSort(int array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
