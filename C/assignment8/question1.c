/*
WAP which will perform like a registration form. It should contain
following things:
- First Name
- Last Name
- Email
- Password (don't display the typed password: getch() function)
- Address
- Semester
- Course
- Phone Number
- After taking input for the above fields, display all the entered data (except password)
to user in proper format.
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    char fname[20], lname[20], email[50], password, address[20], course[20],sem[5],phone[10];
    
    printf("Enter Your First Name: ");
    gets(fname);
   
    printf("Enter Your Last Name: ");
    gets(lname);
    
    printf("Enter Your Email: ");
    gets(email);
    
    printf("Enter a one digit Password: ");
    password=getch();
    
    printf("\nEnter Your Address: ");
    gets(address);
    
    printf("Enter Your Course: ");
    gets(course);
    
    printf("Enter Your Semester: ");
    gets(sem);
    
    printf("Enter Your Phone Number: ");
    gets(phone);
    
    printf("************ Your Details ************\n");
    printf("First name: ");
    puts(fname);
    printf("Last Name: ");
    puts(lname);
    printf("Your Email is: ");
    puts(email);
    printf("Your Address is: ");
    puts(address);
    printf("You have selected a course i.e. ");
    puts(course);
    printf("Your semester is: ");
    puts(sem);
    printf("Your Number is: ");
    puts(phone);
    return 0;
}

