// Program to sum all integers from 1 to 100 using while loop.
#include <stdio.h>
int main()
{
    int sum = 0, i = 1;
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    printf("Sum is %d", sum);
    return 0;
}