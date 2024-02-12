#include <stdio.h>

void transposition(int array[3][3]);

int main(void)
{
    int array[3][3];
    scanf("%d %d %d", &array[0][0], &array[0][1], &array[0][2]);
    scanf("%d %d %d", &array[1][0], &array[1][1], &array[1][2]);
    scanf("%d %d %d", &array[2][0], &array[2][1], &array[2][2]);
    transposition(array);
    printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
    printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);
    printf("%d %d %d\n", array[2][0], array[2][1], array[2][2]);
}

void transposition(int array[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
}
