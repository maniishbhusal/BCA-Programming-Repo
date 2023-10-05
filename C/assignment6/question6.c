// WAP to take input string from user. Your program should allow to input uppercase letter only.
#include <stdio.h>
int main()
{
    char string[10];
    printf("Enter your name in uppercase: ");
    scanf("%[A-Z]", string);
    printf("Your name is %s", string);
    return 0;
}