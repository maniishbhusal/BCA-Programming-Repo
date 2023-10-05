// Progrm to calculate the sum of first 10 even numbers.
#include <stdio.h>
int main()
{
    int sum = 0;
    printf("Sum of first 10 even numbers:\n");
    for (int i = 0; i <= 10; i += 2)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}