/* WAP to display an integer, a float and a string value
using single printf() function */
#include <stdio.h>
int main()
{
    int n = 6;
    float f = 45.23;
    char name[] = "Manish";
    printf("integer value is %d\t float value is %f\t string value is %s", n, f, name);
    return 0;
}