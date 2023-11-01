/*Program to sort the n-elements reading from user and storing dynamic memory
allocation and then sorting in ascending order*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Input the number of elements
    printf("How many numbers: ");
    scanf("%d", &n);

    // Allocate memory for storing numbers
    int *ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        // Check if memory allocation is successful
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Input numbers
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Bubble sort in ascending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                // Swap elements if they are in the wrong order
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    // Display the sorted list
    printf("\nSorted List is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // Free allocated memory
    free(ptr);

    return 0;
}
