#include <stdio.h>
#include <math.h>
#define S(a, b, c) ((a + b + c) / 2)
#define AREA(a, b, c) (sqrt(S(a, b, c) * (S(a, b, c) - a) * (S(a, b, c) - b) * (S(a, b, c) - c)))

int main(void)
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float area = AREA(a, b, c);
    printf("%.3f\n", area);
}
