// WAP to skip input field by specifying character * in scanf() function
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a,b,c : ");
    scanf("%d*%d%d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
}