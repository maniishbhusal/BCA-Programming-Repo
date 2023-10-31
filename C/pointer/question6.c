// Program to demonstrate the relationship between arrays and pointer.
#include <stdio.h>

int main()
{
    // Declare an array of integers
    int numbers[] = {10, 20, 30, 40, 50};

    // Declare a pointer to an integer
    int *ptr;

    // Point the pointer to the first element of the array
    ptr = numbers;

    // Access array elements using the pointer
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i + 1, *ptr);
        // Move the pointer to the next element in the array
        ptr++;
    }

    // Note: After the loop, the pointer has moved beyond the end of the array

    return 0;
}
