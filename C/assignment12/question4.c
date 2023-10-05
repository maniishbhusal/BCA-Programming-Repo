// Program to check whether a given number is an Armstrong number.
// An armstrong number is a number which equal to the sum of the cubes of its individual digits.
#include <stdio.h>

int main()
{
    int num, digit, sum = 0, originalNum;

    // Input from the user
    printf("Enter a number to check whether it is an Armstrong number: ");
    scanf("%d", &num);
    originalNum = num;

    // Calculate the sum of digits raised to the power of the number of digits
    while (num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    // Check if it's an Armstrong number and display the result
    if (originalNum == sum)
    {
        printf("The number is an Armstrong number.");
    }
    else
    {
        printf("The number is not an Armstrong number.");
    }

    return 0;
}
