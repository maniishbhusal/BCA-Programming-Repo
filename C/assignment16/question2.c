// Program to sort an array of numbers in ascending order

#include <stdio.h>

int main() {
    int arr[100], n;

    // Read the number of elements from the user
    printf("\nHow many numbers you want to sort?: ");
    scanf("%d", &n);

    // Read the elements into an array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the original order of the elements
    printf("\nThe numbers before sorting are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    // Bubble Sort algorithm for ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the elements in ascending order
    printf("\nThe numbers in ascending order are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
