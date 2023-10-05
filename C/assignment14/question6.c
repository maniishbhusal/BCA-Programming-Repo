/*
WAP to display following:
1
2   3
3   4   5
4   5   6   7
5   6   7   8   9
*/

#include <stdio.h>
int main()
{
    int p;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            p = (i + j) + 1;
            printf("%d\t", p);
        }
        printf("\n");
    }
    return 0;
}