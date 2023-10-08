// Program to illustrate a function with arguments but no return type.

#include <stdio.h>

// Function prototype
void sum(int, int);

int main()
{
    int a, b;

    // Input
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);

    // Call the function
    sum(a, b);

    // Output a message about the function
    printf("\nIt is a function with arguments and no return value.");

    return 0;
}

// Function definition
void sum(int a, int b)
{
    int s = a + b;

    // Output the sum
    printf("The sum is %d.", s);
}