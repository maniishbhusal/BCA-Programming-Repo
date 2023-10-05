// Program to convert pounds to kilograms
#include <stdio.h>
int main()
{
    float pounds, kilograms;
    printf("Enter a value in pounds: ");
    scanf("%f", &pounds);
    kilograms = pounds * 0.454;
    printf("The value in kilograms is %f\n", kilograms);
    return 0;
}