/* WAP to read a string with multiple words (i.e. string
with space) using gets() function and display on the screen
using puts() function. */
#include <stdio.h>
#include <conio.h>
int main()
{
	char name[20];
	printf("Enter Your Name: ");
	gets(name);
	printf("Your name is: ");
	puts(name);
	return 0;
}
