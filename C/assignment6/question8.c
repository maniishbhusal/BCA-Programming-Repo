// What is the output of the following program?
#include <stdio.h>
int main()
{
    int n = 1234;
    printf(" n=%d", n);
    printf("\n n=%6d", n);
    printf("\n n=%2d", n);
    printf("\n n=%-6d", n);
    printf("\n n=%06d", n);
    return 0;
}