/*WAP to add two numbers and check whether their sum exceeds 500 or not
and display the message accordingly.*/
#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    if (sum > 500)
    {
        printf("Sum exceeds 500");
    }
    else
    {
        printf("Sum does not exceed 500");
    }
    return 0;
}