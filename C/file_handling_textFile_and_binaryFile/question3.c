#include <stdio.h>
#include <stdlib.h>

/*
 * Program to demonstrate writing employee records to a file named employee.dat
 * using the fwrite() function, reading values from user input.
 */

// Define the structure for an employee
struct employee
{
    char name[40];
    int age;
    float salary;
};

int main()
{
    // File pointer for employee.dat
    FILE *fp;

    // Variable to check if the user wants to add another record
    char another = 'Y';

    // Structure variable to store employee data
    struct employee emp;

    // Open the file for writing in binary mode
    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Cannot open file");
        exit(1);
    }

    // Loop to input employee records from the user
    while (another == 'Y')
    {
        // Input employee details
        printf("\nEnter name, age, and basic salary of an employee:\n");
        scanf("%s %d %f", emp.name, &emp.age, &emp.salary);

        // Write the employee record to the file
        fwrite(&emp, sizeof(emp), 1, fp);

        // Ask if the user wants to add another record
        printf("\nAdd another record (Y/N): ");
        scanf(" %c", &another);
    }

    // Close the file
    fclose(fp);

    return 0;
}
