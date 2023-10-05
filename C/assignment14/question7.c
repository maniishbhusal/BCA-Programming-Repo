/*
Program to display the following:
1
1   1
1   1   1
1   1   1   1
1   1   1   1   1
*/

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t",1);
        }
        printf("\n");
    }
    return 0;
}