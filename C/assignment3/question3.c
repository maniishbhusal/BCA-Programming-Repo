// Program to compute the area of a circle using symbolic constant.
#include <stdio.h>
int main()
{
	float radius,area;
	printf("\n Enter the radius of a circle: ");
	scanf("%f",&radius);
	float PI = 3.1416;
	area = PI * radius * radius;
	printf("\n The area of the circle with radius %.2f is %.2f",radius,area);
	return 0;
}
