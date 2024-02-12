#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char two[i+1];
        for (int j = 0; j < i+1; j++)
        {
            two[j] = '2';
        }
        int plus = atoi(two);
        sum += plus;
    }
    printf("%d", sum);
}
