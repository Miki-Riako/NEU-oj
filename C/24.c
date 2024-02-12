#include <stdio.h>

int leadingDiagonalSum(int array[3][3]);
int counterDiagonalSum(int array[3][3]);
int main(void)
{
    int matrix[3][3];
    scanf("%d %d %d", &matrix[0][0], &matrix[0][1], &matrix[0][2]);
    scanf("%d %d %d", &matrix[1][0], &matrix[1][1], &matrix[1][2]);
    scanf("%d %d %d", &matrix[2][0], &matrix[2][1], &matrix[2][2]);
    printf("%d %d\n", leadingDiagonalSum(matrix), counterDiagonalSum(matrix));
}

int leadingDiagonalSum(int array[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += array[i][i];
    }
    return sum;
}
int counterDiagonalSum(int array[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += array[i][2 - i];
    }
    return sum;
}
