// Program to demonstrate the use of union.
#include <stdio.h>

// Define a union named Student
union Student
{
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    // Declare a variable of type Student
    union Student s;

    // Input and display name
    printf("Enter the name: ");
    scanf("%[^\n]s", s.name);
    printf("Name: %s\n", s.name);

    // Input and display roll number
    printf("Enter roll no: ");
    scanf("%d", &s.roll_no);
    printf("Roll no: %d\n", s.roll_no);

    // Input and display marks
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
