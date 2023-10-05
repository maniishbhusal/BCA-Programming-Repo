// WAP to ask for two numbers and check whether they are same numbers or not.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("Both are equal");
    }
    else
    {
        printf("Both are not equal");
    }
    return 0;
}