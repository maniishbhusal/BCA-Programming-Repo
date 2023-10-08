// Program to illustrate functions with arguments and return values.
#include <stdio.h>

// Function prototype
int addition(int, int);

int main()
{
    int a, b, sum;
    // Input
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    // Function call and receive the result
    sum = addition(a, b);
    // Output the result
    printf("\nThe sum is %d.", sum);
    return 0;
}

// Function definition
int addition(int a, int b)
{
    int s = a + b;
    // Return the result
    return s;
}
