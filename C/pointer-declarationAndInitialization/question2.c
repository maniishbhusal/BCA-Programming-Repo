// WAP to add two numbers using pointer.
#include <stdio.h>

int main()
{
    // Declare variables
    int a, b;

    // Input: Get values for a and b from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Declare pointers and assign addresses of variables
    int *x = &a;
    int *y = &b;

    // Calculate the sum using pointers
    int sum = *x + *y;

    // Output: Display the sum
    printf("Sum = %d\n", sum);

    return 0;
}
