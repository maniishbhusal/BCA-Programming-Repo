/*WAP to declare structure named student with name, age, address and marks. Assume the data types.
Take the data for these members from user and display them.*/
#include <stdio.h>

// Define the structure named Student
struct Student
{
    char name[30];
    int age;
    char address[30];
    float marks;
};

int main()
{
    // Declare a variable of type Student
    struct Student stu;

    // Input student details from the user
    printf("Enter your name: ");
    scanf("%[^\n]s", stu.name);

    printf("Enter your age: ");
    scanf("%d", &stu.age);

    // Corrected format specifier for reading the address
    printf("Enter your address: ");
    scanf(" %[^\n]s", stu.address);

    printf("Enter your marks: ");
    scanf("%f", &stu.marks);

    // Display student details
    printf("\nName: %s\nAge: %d\nAddress: %s\nMarks: %.2f\n", stu.name, stu.age, stu.address, stu.marks);

    return 0;
}
