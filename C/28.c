#include <stdio.h>
#include <math.h>

void greater(float a, float b, float c);
void equal(float a, float b, float c);
void less(float a, float b, float c);

int main(void)
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        greater(a, b, c);
    }
    else if (delta == 0)
    {
        equal(a, b, c);
    }
    else less(a, b, c);
    
}

void greater(float a, float b, float c)
{
    float delta = b * b - 4 * a * c;
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);
    printf("x1=%.3f x2=%.3f\n", x1, x2);
}

void equal(float a, float b, float c)
{
    float x = (-b) / (2 * a);
    printf("x1=%.3f x2=%.3f\n", x, x);
}

void less(float a, float b, float c)
{
    float delta = b * b - 4 * a * c;
    float imaginaryCoefficient = sqrt(-delta) / (2 * a);
    float realCoefficient = -b / (2 * a);
    printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", realCoefficient, imaginaryCoefficient, realCoefficient, imaginaryCoefficient);
}
