// Program to check whether entered number is negative.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The number %d is negative", num);
    }
    return 0;
}