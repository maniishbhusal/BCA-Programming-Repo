/* Program to read 10 numbers in an array and finds their sum and display
using the function.*/
#include <stdio.h>

// Function to display elements in an array
void output(int arr[])
{
    printf("The elements in the array are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to calculate the sum of elements in an array
int sum(int arr[])
{
    int s = 0;
    for (int i = 0; i < 10; i++)
    {
        s += arr[i];
    }
    return s;
}

int main()
{
    int arr[10];

    // Input 10 elements in the array
    printf("Enter 10 elements: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display the elements in the array
    output(arr);

    // Display the sum of the array elements
    printf("Sum of array elements is %d\n", sum(arr));

    return 0;
}
