// Program to print a six digit integer in reverse order
#include <stdio.h>
int main()
{
    // Take user input for a six-digit number
    int number;
    printf("Enter a six-digit number: ");
    scanf("%d", &number);
    if (number >= 100000 && number <= 999999)
    {

        int digit6 = number % 10;
        int digit5 = (number / 10) % 10;
        int digit4 = (number / 100) % 10;
        int digit3 = (number / 1000) % 10;
        int digit2 = (number / 10000) % 10;
        int digit1 = number / 100000;

        printf("The number in reverse order is: %d%d%d%d%d%d", digit6, digit5, digit4, digit3, digit2, digit1);
    }
    else
    {
        printf("Invalid Input. Please enter a six-digit number");
    }
    return 0;
}