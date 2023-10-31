// Program to generate Fibonacci series up to n terms using recursive function.
#include <stdio.h>

// Recursive function to generate Fibonacci series
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;

    // Input the number of terms
    printf("Enter n: ");
    scanf("%d", &n);

    // Display Fibonacci numbers up to n terms
    printf("\nFibonacci numbers up to %d terms:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }

    return 0;
}
