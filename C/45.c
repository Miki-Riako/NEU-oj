#include <stdio.h>

int *getArray(void);
void operate(int *array);
void printArray(int *array);

int main(void)
{
    int *array = getArray();
    operate(array);
    printArray(array);
}

int *getArray(void)
{
    static int array[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    return array;
}

void operate(int *array)
{
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == max)
        {
            array[i] = array[9];
            array[9] = max;
        }
        if (array[i] == min)
        {
            array[i] = array[0];
            array[0] = min;
        }
    }
}

void printArray(int *array)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
