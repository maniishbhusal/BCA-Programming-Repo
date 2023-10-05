// Program to read a number and find and display its reverse
#include <stdio.h>
int main()
{
    int num, reverse = 0, remainder;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %d", reverse);
    return 0;
}