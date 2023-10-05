// What is the output of the following program?
#include <stdio.h>
int main()
{
    char ch = 'A';
    printf("ch=%2c", ch);
    printf("\nch=%5c", ch);
    printf("\nch=%-5c", ch);
    return 0;
}