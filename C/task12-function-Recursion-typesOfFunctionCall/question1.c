/*WAP to check whether the person can vote or not using function with the
argument and no return type.*/
#include <stdio.h>

// Function to check whether a person can vote or not
void checkVote(int);

int main()
{
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Call the function to check eligibility to vote
    checkVote(age);

    return 0;
}

// Function to check whether a person can vote or not
void checkVote(int age)
{
    // Check the eligibility based on age
    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
}
