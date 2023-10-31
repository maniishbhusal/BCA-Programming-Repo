// Program to illustrating the use of array of pointers.
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    int a = 1, b = 12, c = 3, d = 4;

    // Declare an array of pointers
    int *p[4] = {&a, &b, &c, &d};

    // Output: Print values and addresses using a loop
    for (int i = 0; i < 4; i++)
    {
        printf("Value of var%d: %d\tAddress: %p\n", i + 1, *p[i], p[i]);
    }

    return 0;
}
