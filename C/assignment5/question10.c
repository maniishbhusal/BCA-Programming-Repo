// Program that demonstrates the use of bitwise logical operators
#include <stdio.h>
int main()
{
    int num1 = 505, num2 = 215;
    int AND, OR, XOR;
    AND = num1 & num2;
    OR = num1 | num2;
    XOR = num1 ^ num2;
    printf("AND = %d\n", AND);
    printf("OR = %d\n", OR);
    printf("XOR = %d\n", XOR);
    return 0;
}