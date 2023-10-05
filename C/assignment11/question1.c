// Program that demonstrates the use of switch statement.
#include <stdio.h>
int main()
{
    int choice;
    printf("Which of these websites you visit the most? ");
    printf("\n Select 1 for Facebook, 2 for Yahoo! and 3 for Google.");
    printf("\n1=>Facebook \n2=> Yahoo! \n3=> Google");
    printf("\nEnter your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You use Facebook.");
        break;

    case 2:
        printf("You use Yahoo!");
        break;

    case 3:
        printf("You use Google");
        break;

    default:
        printf("You have entered an invalid option.");
    }
    return 0;
}