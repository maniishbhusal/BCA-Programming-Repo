// Program to add the first n-natural numbers using recursive function.
#include <stdio.h>

// Recursive function to calculate the sum of the first n natural numbers
int sumOfNatural(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumOfNatural(n - 1);
}

int main()
{
    int n;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate and display the sum of the first n natural numbers
    printf("The sum of the first %d natural numbers is %d.\n", n, sumOfNatural(n));

    return 0;
}
