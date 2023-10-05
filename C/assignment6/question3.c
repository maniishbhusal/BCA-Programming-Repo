// WAP to read marks of a student in a subject. The input marks should be less than 100 (i.e. only two digits)
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks(<100): ");
    scanf("%2d", &marks);
    printf("Your Entered Marks: %d", marks);
    return 0;
}