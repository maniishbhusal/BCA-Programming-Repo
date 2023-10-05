// C program to input an integer number and checks whether it is a prime number.
#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number.", num);
            break;
        }
    }
    if (i == num)
        printf("%d is a prime number.", num);

    return 0;
}