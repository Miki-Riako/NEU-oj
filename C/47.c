#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = 1;
    }
    int check = 0;
    while(1)
    {
        int call = 0;
        while (call < 3)
        {
            if (array[check])
            {
                call++;
                if (call == 3)
                {
                    array[check] = 0;
                }
            }
            check++;
            if (check == n)
            {
                check = 0;
            }
        }
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] == 1)
            {
                counter++;
            }
        }
        if (counter == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (array[i])
                {
                    printf("%d\n", i + 1);
                    break;
                }
            }
            break;
        }
    }
}
