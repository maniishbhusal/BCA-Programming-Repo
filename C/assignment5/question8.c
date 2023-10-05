// Program that finds the larger among two integers using conditional operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a > b ? printf("%d is larger", a) : printf("%d is larger", b);
    return 0;
}