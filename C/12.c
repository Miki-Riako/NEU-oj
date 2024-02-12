#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(void);
int main(void)
{
    char *str = getString();
    int len = strlen(str);
    int intCounter = 0;
    int charCounter = 0;
    int blankCounter = 0;
    int otherCounter = 0;
    for (int i; i < len; i++)
    {
        if ((str[i] >= 48)&&(str[i] <= 57))
        {
            intCounter++;
        }
        else if (((str[i] >= 65)&&(str[i] <= 90))||((str[i] >= 97)&&(str[i] <= 122)))
        {
            charCounter++;
        }
        else if (str[i] == ' ')
        {
            blankCounter++;
        }
        else otherCounter ++;
    }
    printf("%d %d %d %d\n", charCounter, intCounter, blankCounter, otherCounter);
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
