// What is the output of the following program?
#include <stdio.h>
int main()
{
    char str[10] = "MY NEPAL";
    printf("%s", str);
    printf("\n%10s", str);
    printf("\n%10.6s", str);
    printf("\n%.4s", str);
    printf("\n%-10.6s", str);
    printf("\n%4s", str);
    return 0;
}