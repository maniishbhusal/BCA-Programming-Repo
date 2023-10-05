// Program to find the sum of digits of any num supplied by the user.
#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;  // Get the last digit
        sum += rem;      // Add it to sum
        num /= 10;      // Remove the last digit
    }
    printf("Sum of digits = %d", sum);
    return 0;
}