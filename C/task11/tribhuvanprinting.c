/* 1. WAP to print the following patterns.
T
T R
T R I
T R I B
T R I B H
T R I B H U
T R I B H U V
T R I B H U V A
T R I B H U V A N
*/

// PATTERN 1

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20] = "TRIBHUVAN";
    int len = strlen(ch);
    for (int i = 1; i <= len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c\t", ch[j]);
        }
        printf("\n");
    }
    return 0;
}

/* 1. WAP to print the following patterns.
T R I B H U V A N
T R I B H U V A
T R I B H U V
T R I B H U
T R I B H
T R I B
T R I
T R
T
*/
// PATTERN 2
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20] = "TRIBHUVAN";
    int len = strlen(ch);
    for (int i = len; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c\t", ch[j]);
        }
        printf("\n");
    }
    return 0;
}