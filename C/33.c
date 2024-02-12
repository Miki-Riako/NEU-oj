#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(void);
char *copyString(char *str);

int main(void)
{
    char *str = getString();
    char *newStr = copyString(str);
    printf("%s", newStr);
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

char *copyString(char *str)
{
    int len = strlen(str);
    int newLen = 0;
    char *newStr = NULL;
    for (int i = 0; i < len; i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            newStr = (char *)realloc(str, newLen + 2);
            newStr[newLen++] = newStr[i];
            if (str[i] <= 'Z')
            {
                newStr[newLen - 1] = newStr[i] + 32;
            }
            newStr[newLen] = '\0';
        }
    }
    return newStr;
}
