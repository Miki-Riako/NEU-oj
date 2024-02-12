#include <stdio.h>
#include <string.h>
int main(void)
{
    char input[50];
    scanf("%s", input);
    int len = strlen(input);
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        printf("%c ", input[i]);
    }
    printf("\n");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", input[i]);
    }
    printf("\n");
}
