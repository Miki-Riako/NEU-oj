#include <stdio.h>
#define FIND_MAX(numberOne, numberTwo, numberThree) ((numberOne > numberTwo) ? ((numberOne > numberThree) ? numberOne : numberThree) : ((numberTwo > numberThree) ? numberTwo : numberThree))

float findMax(float numberOne, float numberTwo, float numberThree);

int main(void)
{
    float numberOne, numberTwo, numberThree;
    scanf("%f %f %f", &numberOne, &numberTwo, &numberThree);
    printf("%.3f\n", findMax(numberOne, numberTwo, numberThree));
    float tempMax = FIND_MAX(numberOne, numberTwo, numberThree);
    printf("%.3f\n", tempMax);
}

float findMax(float numberOne, float numberTwo, float numberThree)
{
    float max = numberOne;
    if (numberTwo > max)
    {
        max = numberTwo;
    }
    if (numberThree > max)
    {
        max = numberThree;
    }
    return max;
}
