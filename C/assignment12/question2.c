// Program to find the sum and average of the mark of five subjects using while loop.
#include <stdio.h>
int main()
{
    int marks, total, i;
    float average;
    total = 0;
    i = 1;
    while (i <= 5)
    {
        printf("Enter marks in %d subject: ", i);
        scanf("%d", &marks);
        total += marks;
        i++;
    }
    average = (float)total / 5;
    printf("The sum = %d\t and average of marks of five subjects is: %f", total, average);
    return 0;
}