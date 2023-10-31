// Program to demonstrate the accessing of a value by two pointer variables.
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    int a = 5;

    // Declare pointers and initialize them accordingly
    int *pa = &a;
    int **qa = &pa;

    // Output: Print the values using pointers
    printf("a = %d, *pa = %d, **qa = %d\n", a, *pa, **qa);

    return 0;
}
