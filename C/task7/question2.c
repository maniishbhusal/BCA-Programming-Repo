/* WAP to check whether the person is (NESTED IF ELSE)
    a. Above 18 or not. And if the person is above 18 then check the following :
        i. If Person is between 19 and 25 and display message accordingly.
        ii. Else display You are older than 25
    b. Less than or equal to 18 then check the following:
        i. If between 11 to 18  Display Teenager
        ii. else (is between 1-10)  Display You are kid */

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        if (age >= 19 && age <= 25)
        {
            printf("Your age is from 19 to 25.");
        }
        else
        {
            printf("You are older than 25.");
        }
    }
    else
    {
        if (age >= 11 && age <= 18)
        {
            printf("You are teeneger");
        }
        else
        {
            printf("You are kid");
        }
    }
    return 0;
}