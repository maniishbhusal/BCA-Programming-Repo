/* WAP to read two characters from keyboard: one using getch() & 
another using getche() function and displays the characters using
putch() function. */

#include <stdio.h>
#include <conio.h>
int main()
{
	char a,b;
	printf("Enter a character: ");
	a=getch();
	
	printf("\nEnter another character: ");
	b=getche();
	
	printf("\nYour character is: ");
	putch(a);
	printf("\nYour character is: ");
	putch(b);
	return 0;
}
