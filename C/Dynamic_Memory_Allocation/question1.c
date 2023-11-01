/*Program to read an array of integers using dynamic memory allocation and display
the maximum and minimum value.*/
#include <stdio.h>
#include <stdlib.h>

// Function to find and display the minimum and maximum values in an array
void minmax(int *ptr, int n);

int main()
{
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in your array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        // Check if memory allocation is successful
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Input array elements
    printf("\nEnter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Call the function to find and display the minimum and maximum values
    minmax(ptr, n);

    // Free allocated memory
    free(ptr);

    return 0;
}

// Function to find and display the minimum and maximum values in an array
void minmax(int *ptr, int n)
{
    int min, max;

    // Initialize min and max with the first element of the array
    min = max = *ptr;

    // Traverse the array to find the minimum and maximum values
    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) < min)
            min = *(ptr + i);
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }

    // Display the minimum and maximum values
    printf("\nThe maximum number is %d.\n", max);
    printf("The minimum number is %d.\n", min);
}
