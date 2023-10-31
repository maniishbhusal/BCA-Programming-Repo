// WAP to swap two numbers using call by value method.
#include <stdio.h>

// Function prototype for swapping two numbers
void swap(int a, int b);

int main()
{
    int a, b;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call the swap function to swap the numbers
    swap(a, b);

    // Display the original values of a and b (not swapped)
    printf("Original values:\na = %d b = %d\n", a, b);

    return 0;
}

// Function to swap two numbers (call by value method)
void swap(int a, int b)
{
    // Swap the values of a and b
    int temp = a;
    a = b;
    b = temp;

    // Display the values after swapping
    printf("Values after swapping:\na = %d b = %d\n", a, b);
}
