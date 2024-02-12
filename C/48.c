#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    scanf("%d", &m);
    char newStr[n - m + 2];
    for (int i = 0; i < n - m + 1; i++)
    {
        newStr[i] = str[i + m - 1];
    }
    newStr[n - m + 1] = '\0';
    printf("%s\n", newStr);
}
