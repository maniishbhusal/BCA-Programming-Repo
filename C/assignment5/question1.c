// Program to demonstrate the use of arithmetic operations
#include <stdio.h>
int main()
{
    // Declare variables
    int num1, num2;
    char operator;

    // Take user input for two numbers
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Take user input for operator
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &operator);

    float result;

    if (operator== '+')
    {
        result = num1 + num2;
    }
    else if (operator== '-')
    {
        result = num1 - num2;
    }
    else if (operator== '*')
    {
        result = num1 * num2;
    }
    else if (operator== '/')
    {
        if (num2 != 0)
        {
           result = (float)num1 / num2;
        }
        else
        {
            printf("Cannot divide by zero");
            return 1;
        }
    }
    else
    {
        printf("Invalid operator");
        return 1;
    }

    // Print the result
    printf("%d %c %d = %.2f", num1, operator, num2, result);
    return 0;
}
