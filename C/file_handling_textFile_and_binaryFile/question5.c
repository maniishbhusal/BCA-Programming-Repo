/*Program to create a file named "employee.dat" and store records of N employee in the file.
These records contain name, identification number, office name, and occupation of the employee.
Also display name of those employees whose office name is "Everest Bank" and occupation is "manager".*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for Employee
struct Employee
{
    char name[30];
    int id;
    char office_name[30];
    char occupation[30];
};

int main()
{
    // Declare variables
    struct Employee emp;
    int N;
    FILE *fp;

    // Open the file for read and write in binary mode
    fp = fopen("employeee.dat", "wb+");

    // Check if the file is successfully opened
    if (fp == NULL)
    {
        printf("\nCannot open the destination file.");
        exit(1);
    }

    // Get the number of employees from the user
    printf("\nEnter the number of employees: ");
    scanf("%d", &N);

    // Loop to input employee details and write to the file
    for (int i = 0; i < N; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);

        // Input employee name
        printf("Name: ");
        scanf(" %[^\n]s", emp.name);

        // Input employee ID
        printf("ID: ");
        scanf("%d", &emp.id);

        // Input office name
        printf("Office Name: ");
        scanf(" %[^\n]s", emp.office_name);

        // Input occupation
        printf("Occupation: ");
        scanf(" %[^\n]s", emp.occupation);

        // Write the employee details to the file
        fwrite(&emp, sizeof(emp), 1, fp);
    }

    // Rewind the file to the beginning before reading
    rewind(fp);

    // Display employees with office name 'Everest Bank' and occupation 'manager'
    printf("\nEmployees with office name 'Everest Bank' and occupation 'manager':\n");
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (strcmp(emp.office_name, "Everest Bank") == 0 && strcmp(emp.occupation, "manager") == 0)
        {
            printf("%s\n", emp.name);
        }
    }

    // Close the file
    fclose(fp);

    return 0;
}
