#include <stdio.h>
#include <stdlib.h>

void checkFactor(int number, int *factorArray, int *counter);
int main(void)
{
    int N;
    scanf("%d", &N);
    int counter = 0;
    int factorArray[N];
    for (int number = 2; number <= N; number++)
    {
        checkFactor(number, factorArray, &counter);
    }
}

void checkFactor(int number, int *factorArray, int *counter)
{
    for (int i = 0; i < *counter; i++)
    {
        if (number % factorArray[i] == 0)
        {
            return;
        }
    }
    factorArray[*counter] = number;
    (*counter) ++;
    printf("%d\n", number);
}
