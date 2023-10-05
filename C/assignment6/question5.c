// WAP to input string from user and display it on screen.
#include <stdio.h>  
int main() {
    char string[10];  // Declaring a character array named 'string' to store input

    printf("Enter the string: "); 
    scanf("%9s", string);  // Reading a string from user input, with a maximum of 9 characters (+1 for null terminator)

    printf("The string is: %s", string);  // Printing the entered string

    return 0;
}
