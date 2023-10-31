// Program to display all the elements of two dimensional array using pointer.
#include <stdio.h>
int main()
{
    int a[2][3] = {{10, 20, 30}, {40, 22, 125}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(a + i) + j));
        }
        printf("\n");
    }
    return 0;
}