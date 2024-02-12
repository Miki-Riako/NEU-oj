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
        if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
        {
            str[i]++;
            if ((str[i] > 'z') || ((str[i] > 'Z') && (str[i] < 'A')))
            {
                str[i] -= 26;
            }
        }
    }
    printf("%s\n", str);
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
