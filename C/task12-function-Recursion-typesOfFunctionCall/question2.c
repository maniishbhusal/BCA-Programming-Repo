// WAP to find the sum of natural numbers using recursion.
#include <stdio.h>
// Function to find the sum of natural numbers using recursion
int naturalSum(int);

int main()
{
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Display the sum of first n natural numbers
    printf("The sum of the first %d natural numbers is %d\n", n, naturalSum(n));

    return 0;
}

// Recursive function to find the sum of natural numbers
int naturalSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + naturalSum(n - 1);
    }
}
