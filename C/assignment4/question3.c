// Program to find area and perimeter of a rectangle
#include <stdio.h>
int main()
{
    float l, b, area, perimeter;
    printf("Enter length and bredth: ");
    scanf("%f%f", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);
    return 0;
}