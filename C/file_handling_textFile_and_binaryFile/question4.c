/*Program that demonstrates the reading of the records of employee from the employeed.dat file
using fread() function.*/
#include <stdio.h>
#include <stdlib.h>

// Define the structure for employee records
struct employee
{
    char name[40];
    int age;
    float salary;
};

int main()
{
    FILE *fp;
    struct employee emp;

    // Open the file in binary read mode
    fp = fopen("employee.dat", "rb");

    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("Cannot open file");
        exit(1);
    }

    // Display header for the records
    printf("The records in the file employee are...");

    // Read and display records using fread()
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        printf("\n%s %d %.2f", emp.name, emp.age, emp.salary);
    }

    // Close the file after reading
    fclose(fp);

    return 0;
}
