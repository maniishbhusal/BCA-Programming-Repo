// WAP to take details of 5 students in Q1.
#include <stdio.h>

// Define the structure named Q1
struct Q1
{
    char name[20];
    int age;
    int class;
    char department[20];
};

int main()
{
    // Declare an array of Q1 structures to store details of 5 students
    struct Q1 student[5];

    // Input details of 5 students
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your name: ");
        scanf(" %[^\n]s", student[i].name);
        printf("Enter your age: ");
        scanf("%d", &student[i].age);
        printf("Enter your class: ");
        scanf("%d", &student[i].class);
        printf("Enter your department: ");
        scanf(" %[^\n]s", student[i].department);
        printf("\n");
    }

    // Display details of all 5 students
    printf("Your details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\nAge: %d\nClass: %d\nDepartment: %s\n", student[i].name, student[i].age, student[i].class, student[i].department);
        printf("\n");
    }

    return 0;
}
