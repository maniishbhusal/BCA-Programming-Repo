// Program to find the Fibonacci sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
#include <stdio.h>
int main()
{
    int fib1, fib2, prev, next, num;
    fib1 = 1;
    fib2 = 1;
    prev = fib1;
    printf("Enter number upto which you want fibonacci series: ");
    scanf("%d", &num);
    printf("%d", fib1);
    do
    {
        next = fib2 + prev;
        prev = fib2;
        fib2 = next;
        printf(",%d", prev);
    } while (num > next);
    return 0;
}