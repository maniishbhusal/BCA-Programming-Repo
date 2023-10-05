// Program to find power of a given number
#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, power;
    printf("Enter the base number: ");
    scanf("%f", &x);
    printf("Enter the power: ");
    scanf("%f", &y);
    power = pow(x, y);
    printf("The power of %.2f^%.2f is %.2f", x, y, power);
    return 0;
}