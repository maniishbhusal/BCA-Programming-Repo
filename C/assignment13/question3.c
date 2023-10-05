/* Program to print first 10 terms of the following series using for loop:
1   5   9   13...*/
#include <stdio.h>
int main()
{
    int i, n = 1;
    printf("\nFirst 10 terms of the series are: \n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t", n);
        n += 4;
    }
    return 0;
}