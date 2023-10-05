// WAP to find whether the person can vote or not.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You're not eligible for vote.");
    }
    else
    {
        printf("You're eligible for vote.");
    }
    return 0;
}