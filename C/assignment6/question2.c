// WAP to show the use of ordinary character in control string of scanf() function
#include <stdio.h>
int main()
{
    int day, month, year;
    printf("Enter your date of birth in sequence ");
    printf("day, month and then year separated by / character: ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Your date of birth is %d day %d month %d year", day, month, year);
    return 0;
}