// Program to convert decimal number into binary
#include <stdio.h>

int main() {
    int decimalNumber, remainder, binary = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;    // Get the remainder when dividing by 2
        binary = binary + remainder * base;
        decimalNumber = decimalNumber / 2; // Update decimal number
        base = base * 10;
    }

    printf("The binary equivalent is: %d\n", binary);

    return 0;
}
