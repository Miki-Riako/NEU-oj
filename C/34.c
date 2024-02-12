#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[4];
    scanf("%s", str);
    for (int i; i < strlen(str); i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
}
