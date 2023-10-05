// Program to convert number of days into days and months
#include <stdio.h>
int main()
{
    int days, months;
    printf("Enter number of days: ");
    scanf("%d", &days);
    months = days / 30;
    days = days % 30;
    printf("Months = %d Days = %d", months, days);
    return 0;
}