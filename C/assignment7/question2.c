/* WAP to read a character from keyboard using getchar()
function & display on the screen using putchar() function. */
#include <stdio.h>
#include <conio.h>
int main()
{
	char gender;
	printf("Enter gender M or F: ");
	gender=getchar();
	printf("Your gender is: ");
	putchar(gender);
	return 0;
}
