// Program that demonstrates the use of sizeof() operator.
#include <stdio.h>
int main()
{
    int num;
    printf("Size of int: %d bytes\n", sizeof(num));
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("double Constant Occupies => %d bytes\n", sizeof(3.14));
    return 0;
}