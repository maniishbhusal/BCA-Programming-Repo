/*Program to create a file named employee.txt and write name, id, address, and salary
of a employee to this file.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    int id;
    char address[30];
    float salary;

    // Open the file in write mode
    FILE *fp = fopen("employee.txt", "w");
    if (fp == NULL)
    {
        printf("File cannot be created or opened.");
        exit(1);
    }

    // Input employee details
    printf("\nEnter name of employee: ");
    gets(name);

    printf("\nEnter id of %s: ", name);
    scanf("%d", &id);

    printf("\nEnter address of %s: ", name);
    scanf(" %[^\n]s", address);

    printf("\nEnter salary of %s: ", name);
    scanf("%f", &salary);

    // Write employee details to the file
    printf("\nNow writing data to file...");
    fprintf(fp, "Name=%s\nID=%d\nAddress=%s\nSalary=%.2f", name, id, address, salary);
    printf("\nCompleted");

    // Close the file
    fclose(fp);
    return 0;
}
