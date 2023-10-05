// Program that finds the largest among four integers using conditional operator
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    int larg1 = n1 > n2 ? n1 : n2;
    int larg2 = larg1 > n3 ? larg1 : n3;
    int largest = larg2 > n4 ? larg2 : n4;
    printf("Largest among %d, %d, %d and %d is %d", n1, n2, n3, n4, largest);
    return 0;
}