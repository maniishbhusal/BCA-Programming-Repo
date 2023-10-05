//Program to find the square root of a given number
#include <stdio.h>
int main()
{
	float n,s;
	printf("Enter a number: ");
	scanf("%f",&n);
	s=sqrt(n);
	printf("The square root of number %f is %f.",n,s);
	return 0;
}
