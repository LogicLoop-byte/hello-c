#include <stdio.h>
#include <math.h>
int main() {int a, b, c;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The given lengths do not form a triangle.\n");
    }
    return 0;
}