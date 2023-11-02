/*Write a menu driven program which performs the following jobs:
* Create a structure named student with member variables: roll, name, grade, gender, age.
* Define ten structure variables of type student and using loop take input for all ten
structure variables.
* Display names of all male students.
* Exit.
*/
#include <stdio.h>
#include <stdlib.h>

#define N 4

// Define the structure for Student
struct Student
{
    int roll;
    char name[20];
    int grade;
    char gender;
    int age;
};

int main()
{
    struct Student s[N];
    char option, choice = 'y';

    while (choice != 'n')
    {
        // Display menu options
        printf("\nMenu Driven Program\n");
        printf("1. Enter student information\n");
        printf("2. Display names of all male students\n");
        printf("3. Exit\n");
        printf("Enter your option: ");
        scanf(" %c", &option);

        switch (option)
        {
        case '1':
            printf("Enter information for %d students\n", N);
            for (int i = 0; i < N; i++)
            {
                printf("\nInformation for student %d:\n", i + 1);
                printf("Roll: ");
                scanf("%d", &s[i].roll);
                printf("Name: ");
                scanf("%s", s[i].name);
                printf("Grade: ");
                scanf("%d", &s[i].grade);
                printf("Gender (M/F): ");
                scanf(" %c", &s[i].gender);
                printf("Age: ");
                scanf("%d", &s[i].age);
            }
            break;

        case '2':
            printf("\nNames of all male students:\n");
            for (int i = 0; i < N; i++)
            {
                if (s[i].gender == 'M')
                {
                    printf("%s\n", s[i].name);
                }
            }
            break;

        case '3':
            exit(0);

        default:
            printf("Invalid Option!\n");
        }

        // Ask user if they want to continue
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    }

    return 0;
}
