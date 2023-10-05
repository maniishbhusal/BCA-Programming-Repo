// Program that reads time in seconds and converts it in to hour, minute and seconds
#include <stdio.h>
int main()
{
    int sec;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    int hour = sec / 3600;
    int rsec = sec % 3600;
    int minute = rsec / 60;
    sec = rsec % 60;
    printf("%d hour, %d minute, and %d sec", hour, minute, sec);
    return 0;
}