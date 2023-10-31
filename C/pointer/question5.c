/*Program that lower case letter to upper case and upper case to lower case
by passing of pointer to function*/
#include <stdio.h>

void conversion(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
    else if (*c >= 'A' && *c <= 'Z')
        *c += 32;
}

int main()
{
    char ch;

    // Input: Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Call the conversion function
    conversion(&ch);

    // Output: Display the corresponding character
    printf("The corresponding character is %c.\n", ch);

    return 0;
}
