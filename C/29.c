#include <stdio.h>

void checkPrime(int number);

int main(void)
{
    int n;
    scanf("%d", &n);
    checkPrime(n);
}

void checkPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("not prime\n");
            return;
        }
    }
    printf("prime\n");
}
