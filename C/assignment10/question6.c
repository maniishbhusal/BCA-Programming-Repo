/*Program to that reads the marks of four subject of a student from the user and
compute percentage and grade of the student using the following conditions:
percentage >= 80, grade = A
percentage <80 and per>=60, grade = B
percentage <60 and per>=50, grade  = C
percentage <50 and per>=40, grade = D
percentage <40, grade = F*/

#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, per;
    char grade;
    printf("Enter the marks of four subject: ");
    scanf("%f%f%f%f", &m1, &m2, &m3, &m4);
    per = (m1 + m2 + m3 + m4) / 4;
    if (per >= 80)
    {
        grade = 'A';
    }
    else if (per < 80 && per >= 60)
    {
        grade = 'B';
    }
    else if (per < 60 && per >= 50)
    {
        grade = 'C';
    }
    else if (per < 50 && per >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    printf("Percentage is %f\n Grade is %c", per, grade);
    return 0;
}