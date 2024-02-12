#include <stdio.h>
#include <string.h>

void stringSort(char *stringOne, char *stringTwo, char *stringThree);

int main(void)
{
    char stringOne[50], stringTwo[50], stringThree[50];
    scanf("%s", stringOne);
    scanf("%s", stringTwo);
    scanf("%s", stringThree);
    stringSort(stringOne, stringTwo, stringThree);
    printf("%s\n%s\n%s\n", stringOne, stringTwo, stringThree);
}

void stringSort(char *stringOne, char *stringTwo, char *stringThree)
{
    if (strcmp(stringOne, stringTwo) > 0)
    {
        char temp[50];
        strcpy(temp, stringOne);
        strcpy(stringOne, stringTwo);
        strcpy(stringTwo, temp);
    }
    if (strcmp(stringOne, stringThree) > 0)
    {
        char temp[50];
        strcpy(temp, stringOne);
        strcpy(stringOne, stringThree);
        strcpy(stringThree, temp);
    }
    if (strcmp(stringTwo, stringThree) > 0)
    {
        char temp[50];
        strcpy(temp, stringTwo);
        strcpy(stringTwo, stringThree);
        strcpy(stringThree, temp);
    }
}
