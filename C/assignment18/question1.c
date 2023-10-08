// Program to illustrate a function with no arguments and no return type.

#include <stdio.h>

// Function prototype
void sum();

int main()
{
    // Call the function
    sum();
    printf("\nIt is a function with no arguments and no return value.");
    return 0;
}

// Function definition
void sum()
{
    int a, b, s;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    s = a + b;
    printf("Sum = %d", s);
}
