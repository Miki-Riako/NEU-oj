#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(void);
char *linkString(char *strOne, char *strTwo);
int main(void)
{
    char *strOne = getString();
    char *strTwo = getString();
    char *newStr = linkString(strOne, strTwo);
    printf("%s\n", newStr);
    free(strOne);
    free(strTwo);
    free(newStr);
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

char *linkString(char *strOne, char *strTwo)
{
    int lenOne = strlen(strOne);
    int lenTwo = strlen(strTwo);
    char *str = malloc(lenOne + lenTwo + 1);
    for (int i = 0; i < lenOne; i++)
    {
        str[i] = strOne[i];
    }
    for (int i = 0; i < lenTwo; i++)
    {
        str[lenOne + i] = strTwo[i];
    }
    return str;
}
