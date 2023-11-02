/*WAP to declare structure named employee with name, age, post, salary
as data members to store the details of 5 employees.*/
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

    // Display details of all 5 employees
    printf("Employees' details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\nAge: %d\nPost: %s\nSalary: %d\n", emp[i].name, emp[i].age, emp[i].post, emp[i].salary);
        printf("\n");
    }

    return 0;
}
