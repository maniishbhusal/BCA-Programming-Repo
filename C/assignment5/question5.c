// Program to sum the digits of a positive integer which is 5 digits long
#include <stdio.h>
int main()
{
    int number;
    // User inputs
    printf("Enter a 5 digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999)
    {
        printf("Invalid number. Please enter a 5 digit number!");
    }
    else
    {

        int digit1 = number / 10000;
        int digit2 = (number / 1000) % 10;
        int digit3 = (number / 100) % 10;
        int digit4 = (number / 10) % 10;
        int digit5 = number % 10;

        int sum = digit1 + digit2 + digit3 + digit4 + digit5;
        printf("The sum of the digits is %d", sum);
    }
    return 0;
}