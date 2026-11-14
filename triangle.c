#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("Enter three sides: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Input error: please enter three numbers.\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Sides must be positive.\n");
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Not a triangle.\n");
        return 1;
    }

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %.2f\n", area);

    return 0;
}
