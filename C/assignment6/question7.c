/* WAP to read string with multiple words (i.e. with space)
using scanf() function and display on the screen */
#include <stdio.h>
int main()
{
    char string[100];
    printf("Enter Your Full Name: ");
    scanf("%[^\n]", string);  // Read characters until a newline is encountered
    printf("Your Full Name is: %s", string);
    return 0;
}