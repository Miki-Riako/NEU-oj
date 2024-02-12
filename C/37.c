#include <stdio.h>
#define MOD(a, b) (a % b)

int main(void)
{
    int numberOne, numberTwo;
    scanf("%d %d", &numberOne, &numberTwo);
    int reminder = MOD(numberOne, numberTwo);
    printf("%d", reminder);
}
