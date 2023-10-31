// Program to find the minimum value in an array by passing array to function.
#include <stdio.h>
#define N 10

// Function to find the minimum value in an array
int findMinimum(int arr[])
{
    int minValue = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (minValue > arr[i])
        {
            minValue = arr[i];
        }
    }
    return minValue;
}

int main()
{
    int arr[N];

    // Input 10 numbers into the array
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display the minimum value in the array
    printf("Minimum value is %d.\n", findMinimum(arr));

    return 0;
}
