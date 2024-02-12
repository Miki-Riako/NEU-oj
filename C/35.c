#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(void);

int main(void)
{
    char *str = getString();
    int charNumber = 0;
    int integerNumber = 0;
    int blankNumber = 0;
    int otherNumber = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            charNumber++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            integerNumber++;
        }
        else if (str[i] == ' ')
        {
            blankNumber++;
        }
        else otherNumber++;
    }
    printf("%d %d %d %d\n", charNumber, integerNumber, blankNumber, otherNumber);
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
