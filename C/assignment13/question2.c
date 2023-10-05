// C program to display the sum of even numbers up to n terms.
#include <stdio.h>
int main()
{
    int n, i, j = 2, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum += j;
        j += 2;
    }
    printf("The sum of even numbers up to %d terms is %d", n, sum);
    return 0;
}