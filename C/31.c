#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(void);
int main(void)
{
    char *str = getString();
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        printf("%c", str[len - 1 - i]);
    }
    free(str);
}

char *getString(void)
{
    char *str = NULL;
    int len = 0;
    int chara;
    while ((chara = getchar()) != '\n' && chara != EOF)
    {
        str = (char *)realloc(str, len + 2);
        if (str == NULL)
        {
            printf("Memory allocation error!\n");
            exit(1);
        }
        str[len++] = chara;
        str[len] = '\0';
    }
    return str;
}
