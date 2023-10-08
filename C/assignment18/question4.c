// Program using function value and no arguments.
#include <stdio.h>
int sum();

int main()
{
    int r = sum();
    printf("Sum = %d", r);
    printf("\nIt is a function with no arguments and return value.");
    return 0;
}

int sum()
{
    int s, a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    s = a + b;
    return s;
}