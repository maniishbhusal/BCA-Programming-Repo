// Program to add, subtract, multiply, and divide two whole numbers.

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);
    printf("Quotient = %f\n",(float)num1 / num2);
    return 0;
}