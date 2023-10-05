// WAP to show the usage of whitespace character in scanf() function
#include <stdio.h>
int main()
{
    int n1;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter a character: ");
    scanf(" %c", &ch); // Use white-space characters to make a program more readable.
    printf("Number = %d\n", n1);
    printf("Character = %c", ch);
    return 0;
}