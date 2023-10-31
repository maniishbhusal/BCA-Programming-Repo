// Declare pointer, initialize it and then print the value and address of the variables using pointer.
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    int a = 5, b = 12;

    // Declare pointers and assign addresses of variables
    int *x = &a;
    int *y = &b;

    // Print the value and address of variable 'a' using pointer 'x'
    printf("Value of a: %d\n", *x);
    printf("Address of a: %p\n", x);

    // Print the value and address of variable 'b' using pointer 'y'
    printf("Value of b: %d\n", *y);
    printf("Address of b: %p\n", y);

    return 0;
}
