// C program to read a positive integer less than 20 and display its multiplication table.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive number less than 20: ");
    scanf("%d", &n);
    if (n > 0 && n < 20)
    {
        printf("The multiplication table of %d is:\n", n);
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    else
    {
        printf("You have entered negative number or number greater than 20");
    }
    return 0;
}