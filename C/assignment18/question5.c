/* Write a function to add, subtract, multiply & divide two complex 
numbers (x + i*y) and (a + i*b) */

#include <stdio.h>

// Function to add two complex numbers
void add(int x, int y, int a, int b) {
    printf("\nThe addition of the complex numbers is: %d + i%d", x + a, y + b);
}

// Function to subtract two complex numbers
void subtract(int x, int y, int a, int b) {
    printf("\nThe subtraction of the complex numbers is: %d + i%d", x - a, y - b);
}

// Function to multiply two complex numbers
void multiply(int x, int y, int a, int b) {
    int real, img;
    real = (a * x - b * y);
    img = (a * y + b * x);
    printf("\nThe multiplication of the complex numbers is: %d + i%d", real, img);
}

int main() {
    int x, y, a, b;

    // Input
    printf("\nEnter the first complex number in the form (x + iy): ");
    scanf("%d+i%d", &x, &y);

    printf("Enter the second complex number in the form (a + ib): ");
    scanf("%d+i%d", &a, &b);

    // Function calls
    add(x, y, a, b);
    subtract(x, y, a, b);
    multiply(x, y, a, b);

    return 0;
}
