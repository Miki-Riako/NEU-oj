#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    scanf("%s", string);
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        string[i] += 4;
        if (((string[i] > 'Z')&&(string[i] < 'a'))||(string[i] > 'z'))
        {
            string[i] -= 26;
        }
    }
    printf("%s", string);
}
