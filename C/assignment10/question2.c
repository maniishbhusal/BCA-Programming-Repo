// Program to determine whether the entered number is even or odd.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number %d is even", num);
    }
    else
    {
        printf("The number %d is odd", num);
    }
    return 0;
}