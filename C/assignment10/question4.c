// Program to determine the roots of quadratic equation ax^2 + bx + c = 0
#include <math.h>
#include <stdio.h>
int main()
{
    float a, b, c, d, root1, root2, real, img;
    printf("Enter the coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("Imaginary Roots.");
        d = sqrt(fabs(d));
        real = -b / (2 * a);
        img = d / (2 * a);
        printf("\nRoot1 = %.2f +i %.2f", real, img);
        printf("\nRoot2 = %.2f -i %.2f", real, img);
    }
    else
    {
        printf("Real Roots.");
        d = sqrt(d);
        root1 = (-b + d) / (2 * a);
        root2 = (-b - d) / (2 * a);
        printf("\nRoot1 = %.2f \t Root2 = %.2f", root1, root2);
    }
    return 0;
}