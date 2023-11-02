// WAP to find the average salary of the employees in Q3.
#include <stdio.h>

// Define the structure named Employee
struct Employee
{
    char name[20];
    int age;
    char post[20];
    int salary;
};

int main()
{
    int avg_salary = 0;

    // Declare an array of Employee structures to store details of 5 employees
    struct Employee emp[5];

    // Input details of 5 employees
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your name: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Enter your age: ");
        scanf("%d", &emp[i].age);
        printf("Enter your post: ");
        scanf(" %[^\n]s", emp[i].post);
        printf("Enter your salary: ");
        scanf("%d", &emp[i].salary);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        avg_salary += emp[i].salary;
    }

    printf("The average salary of an employee is %d.\n", avg_salary / 5);
    return 0;
}
