// Program to find the area between concentric circles
#include <stdio.h>
#define PI 3.1415
int main()
{
    float r1, r2, area;
    printf("Enter the radius of the first circle: ");
    scanf("%f", &r1);
    printf("Enter the radius of the second circle: ");
    scanf("%f", &r2);
    area = PI * (r2 * r2 - r1 * r1);
    printf("The area between the two circles is %f", area);
    return 0;
}