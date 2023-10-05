// WAP to check whether a person is a teenager or not
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if (age < 20 && age > 12)
    {
        printf("You are teenager.");
    }
    else
    {
        printf("You are not teenager.");
    }
    return 0;
}