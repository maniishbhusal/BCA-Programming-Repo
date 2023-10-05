// WAP to find the smallest and largest element in the array.
#include <stdio.h>

int main()
{
    int arr[100], n;

    // Read the number of elements from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements into an array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume the first element as the initial min and max
    int smallest = arr[0];
    int largest = arr[0];

    // Iterate through the array to find the smallest and largest
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Display the results
    printf("The smallest number is: %d\n", smallest);
    printf("The largest number is: %d\n", largest);

    return 0;
}
