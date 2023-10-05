// Program that performs the arithmetic operation using switch statement.
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("\nThe sum of %d and %d is %d", a, b, a + b);
        break;

    case '-':
        printf("\nThe difference of %d and %d is %d", a, b, a - b);
        break;

    case '*':
        printf("\nThe product of %d and %d is %d", a, b, a * b);
        break;

    case '/':
        printf("\nThe quotient of %d and %d is %d", a, b, a / b);
        break;

    default:
        printf("\nInvalid operator");
    }
}