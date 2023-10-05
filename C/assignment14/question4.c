/*Write a program to display the following menu:
1. To find the area of circle
2. To check the given number is odd or even
3. To find the sum of N numbers
4. Exit
*/
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define PI 3.1415
int main()
{
    int choice, n, N;
    float r, a, num, sum;
    printf("1. Find area of circle\n");
    printf("2. Check the given number is odd or even\n");
    printf("3. Find the sum of N numbers\n");
    printf("4. Exit\n");
    while (TRUE)
    {
        printf("Enter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            a = PI * r * r;
            printf("Area of a circle is %f\n", a);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n % 2 == 0)
            {
                printf("%d is even\n", n);
            }
            else
            {
                printf("%d is odd\n", n);
            }
            break;

        case 3:
            sum = 0;
            printf("Enter value of N: ");
            scanf("%d", &N);
            printf("Enter %d numbers: ", N);
            for (int i = 0; i < N; i++)
            {
                scanf("%f", &num);
                sum += num;
            }
            printf("Sum = %f\n", sum);
            break;

        case 4:
            exit(0);
        default:
            printf("Wrong choice! Try again\n");
        }
    }
    return 0;
}