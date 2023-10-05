// WAP to swap to numbers
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("\nBefore Swapping:");
    printf("\nThe value of num1 is %d and num2 is %d\n", num1, num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("\nAfter Swapping:");
    printf("\nThe value of num1 is %d and num2 is %d", num1, num2);
    return 0;
}