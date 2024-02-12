#include <stdio.h>

long long int factorial(int input);
int main(void)
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }
    printf("%lld", sum);
}

long long int factorial(int input)
{
    long long int output = 1;
    for (int i = 1; i <= input; i++)
    {
        output *= i;
    }
    return output;
}
