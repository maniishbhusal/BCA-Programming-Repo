// Program to convert a temperature given in Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f", fahrenheit);
    return 0;
}