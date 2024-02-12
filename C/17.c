#include <stdio.h>
#include <stdlib.h>

void findFactors(int input);
int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 2; i < N; i++)
    {
        findFactors(i);
    }
}

void findFactors(int input)
{
    int *factors;
    factors = (int *)malloc(4);
    int sum = 0;
    int counter = 0;
    for (int i = 1; i < input; i++)
    {
        if (input % i == 0)
        {
            factors[counter] = i;
            counter++;
            sum += i;
            factors = (int *)realloc(factors, 4 *(counter + 1));
        }
    }
    if (sum == input)
    {
        printf("%d its factors are", input);
        for (int i = 0; i < counter; i++)
        {
            printf(" %d", factors[i]);
        }
        printf("\n");
    }
    free(factors);
}
