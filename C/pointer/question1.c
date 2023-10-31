// Program for illustrating the use of double pointer
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    int x = 10;

    // Declare pointers
    int *p = &x;
    int **q = &p;

    // Output: Print values and addresses
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", p);
    printf("Value at address of x = %d\n", *p);
    printf("Address of p = %p\n", q);
    printf("Value at value at address of x = %d\n", **q);

    return 0;
}
