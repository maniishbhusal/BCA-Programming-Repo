// Program that demonstrates the use of bitwise shift operators.
#include <stdio.h>
int main()
{
    int num1 = 157;
    int left, right;
    left = num1 << 3;
    right = num1 >> 3;
    printf("Left shift of %d by 3 is %d\n", num1, left);
    printf("Right shift of %d by 3 is %d\n", num1, right);
    return 0;
}