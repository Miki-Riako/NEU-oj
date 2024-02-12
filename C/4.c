#include <stdio.h>
#define PI 3.14

int main(void)
{
    double r, h;
    scanf("%lf %lf", &r, &h);
    printf("C1=%.2lf\n", 2 * PI * r);
    printf("Sa=%.2lf\n", PI * r * r);
    printf("Sb=%.2lf\n", 4 * PI * r * r);
    printf("Va=%.2lf\n", 4 * PI * r * r * r / 3);
    printf("Vb=%.2lf", PI * r * r * h);
}
