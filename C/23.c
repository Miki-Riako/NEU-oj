#include <stdio.h>

void selectionSort(int array[], int length);
int main(void)
{
    int array[10];
    scanf("%d %d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9]);
    selectionSort(array, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
}

void selectionSort(int array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
