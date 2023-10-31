// Program to compute the factorial of a number using recursion.
#include <stdio.h>

// Function to compute the factorial of a number using recursion
int factorial(int);

int main()
{
    int n;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the factorial
    int fact = factorial(n);

    // Display the result
    printf("The factorial of %d is %d.\n", n, fact);

    return 0;
}

int factorial(int num)
{
    // Base case: factorial of 0 is 1
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}
