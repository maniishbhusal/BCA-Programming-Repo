// Program to demonstrate the relationship between string and pointer.
#include <stdio.h>
#include <string.h>
int main()
{
    char *namaste = "NAMASKAR SIR";
    // char namaste[20] =  "NAMASKAR SIR";
    char name[40];
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    puts(namaste);
    printf("Namaskar %s Sir", name);
    return 0;
}