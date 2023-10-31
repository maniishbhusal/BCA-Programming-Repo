// Program to swap pointer values
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    int a = 5, b = 12;

    // Declare and initialize pointers
    int *pa = &a, *pb = &b;

    // Output: Print initial values using pointers
    printf("*pa = %d, *pb = %d\n", *pa, *pb);

    // Swap values using pointers
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    // Output: Print values after swapping
    printf("*pa = %d, *pb = %d\n", *pa, *pb);

    return 0;
}
