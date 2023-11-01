/*Program that reads the marks of n courses and finds the sum and average using the dynamic
array using dynamic memory allocation function malloc()*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *p, sum = 0, avg;

    // Input the number of courses
    printf("How many courses of a student? ");
    scanf("%d", &n);

    // Allocate memory for storing marks
    p = (float *)malloc(n * sizeof(float));
    if (p == NULL)
    {
        // Check if memory allocation is successful
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Input marks for each course
    printf("Enter marks of each course:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", p + i);
        sum += *(p + i);
    }

    // Calculate the average marks
    avg = sum / n;

    // Display the sum and average marks
    printf("The sum of the marks is %.2f\n", sum);
    printf("The average marks is %.2f\n", avg);

    // Free allocated memory
    free(p);

    return 0;
}
