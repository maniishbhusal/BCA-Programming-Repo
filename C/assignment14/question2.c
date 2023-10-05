// Program to display all prime numbers less than 100.
#include <stdio.h>
int main()
{
    int prime;
    printf("Prime numbers from 1 to 100 are:\n");
    for (int i = 2; i < 100; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}