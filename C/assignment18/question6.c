/*
   Write a function to solve a quadratic equation ax^2 + bx + c = 0.
   The inputs to the function are the values a, b, and c, and the outputs of
   the function should be stored in variable names p and q appropriately declared.
*/

#include <stdio.h>
#include <math.h>

// Function to solve a quadratic equation
void quad(float, float, float);

int main()
{
    float a, b, c;

    // Input coefficients of the quadratic equation
    printf("\nEnter values a, b, and c of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    // Call the quadratic equation solver function
    quad(a, b, c);
    return 0;
}

void quad(float a, float b, float c)
{
    float p, q, d;

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    if (d < 0)
    {
        // Complex roots
        printf("\nImaginary Roots.");
        d = sqrt(fabs(d)); // Compute the absolute value of the discriminant
        p = -b / (2 * a);
        q = d / (2 * a);
        printf("\nRoot1 = %.2f + i %.2f", p, q);
        printf("\nRoot2 = %.2f - i %.2f", p, q);
    }
    else
    {
        // Real roots
        printf("\nRoots are real.");
        d = sqrt(d);
        p = (-b + d) / (2 * a);
        q = (-b - d) / (2 * a);
        printf("\nRoot1 = %.2f \t Root2 = %.2f", p, q);
    }
}
