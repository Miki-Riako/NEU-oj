#include <stdio.h>
#define SWAP(a, b) {int temp = a; a = b; b = temp;}

int main(void)
{
    int numberOne, numberTwo;
    scanf("%d %d", &numberOne, &numberTwo);
    SWAP(numberOne, numberTwo);
    printf("%d %d", numberOne, numberTwo);
}
