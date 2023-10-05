// Program to find simple interest.

#include <stdio.h>
int main()
{
    int p, t;
    float r, si;
    printf("Enter the value of p, t, r: ");
    scanf("%d%d%f", &p, &t, &r);
    si = (p * t * r) / 100;
    printf("Simple interest = %f", si);
    return 0;
}