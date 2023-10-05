// Program that demonstrates the use of logical operators
#include <stdio.h>
int main()
{
    int x = 25, y = 10, z = 15;
    printf("x > y && x > z: %d\n", x > y && x > z);
    printf("x > y || x > z: %d\n", x > y || x > z);
    printf("!(x > y): %d\n", !(x > y));
    printf("x < z && y < z: %d\n", x < z && y < z);
    printf("x < z || y < z: %d\n", x < z || y < z);
    return 0;
}