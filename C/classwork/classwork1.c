//Declare variables of different data types and print their values (int type - 2 variables, float 5 variable, character type - 5)

#include <stdio.h>
int main()
{
//	Integer type
	int a = 27;
	int b = 32;
	printf("The value of a is %d\n", a);
	printf("The value of b is %d\n", b);
	//	Float type
	float c = 2.3;
	float d = 2.43322;
	float e = 2323.23231264723647;
	printf("The value of c is %f\n", c);
	printf("The value of d is %f\n",d);
	printf("The value of d with 2 decimal value is %.2f\n",d);
	printf("The value of d with 3 decimal value is %.3f\n",d);
	printf("The value of e with 10 decimal value is %.10f\n",d);
//	Character type
	char char1 = "e";
	char char2 = "z";
	printf("The value of character char1 is %c\n", char1);
	printf("The value of character char1 is %c\n", char2);
	return 0;
}
