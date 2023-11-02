/*Program to read 5 students record with following fields and display the record
of BCA faculty only.
Roll No.    |    Name   |    Faculty    |     DOB(date of birth)    |
|           |           |               |       dd | mm | yy        |
*/
#include <stdio.h>
#include <string.h>
#define NUM 5

struct DOB
{
    int dd;
    int mm;
    int yy;
};

struct Student
{
    int roll_no;
    char name[20];
    char faculty[10];
    struct DOB date_of_birth;
};

int main()
{
    struct Student s[NUM];

    // Input data for each student
    for (int i = 0; i < NUM; i++)
    {
        printf("\nEnter data for student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter name: ");
        scanf(" %s", s[i].name);
        printf("Enter faculty: ");
        scanf(" %s", s[i].faculty);
        printf("Enter day: ");
        scanf("%d", &s[i].date_of_birth.dd);
        printf("Enter month: ");
        scanf("%d", &s[i].date_of_birth.mm);
        printf("Enter year: ");
        scanf("%d", &s[i].date_of_birth.yy);
        printf("\n");
    }

    // Display the records of students in the BCA faculty
    printf("Student records of BCA Faculty:\n");
    for (int i = 0; i < NUM; i++)
    {
        if (strcmp(s[i].faculty, "BCA") == 0)
        {
            printf("Roll no: %d\n", s[i].roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Faculty: %s\n", s[i].faculty);
            printf("Date of birth: %d-%d-%d\n", s[i].date_of_birth.yy, s[i].date_of_birth.mm, s[i].date_of_birth.dd);
        }
    }

    return 0;
}
