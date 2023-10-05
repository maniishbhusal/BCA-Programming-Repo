// Program to read a number from keyboard and check whether it is a palindrome or not
#include <stdio.h>
int main()
{
    int num, rev = 0, rem, originalNum;
    printf("Enter a number to check whether it is a palindrome or not: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (originalNum == rev)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
    return 0;
}