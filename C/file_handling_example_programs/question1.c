// Program to append some text to a file by reading filename from user.
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare file pointer and character variable
    FILE *fp;
    char filename[20];
    char c;

    // Get filename from user
    printf("Enter filename: ");
    gets(filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    
    // Check if file is opened successfully
    if (fp == NULL) {
        printf("Cannot create or open file.");
        exit(0);
    }

    // Prompt user to enter text
    printf("\nEnter text to append to file %s:\n", filename);

    // Read characters until newline and append to the file
    while ((c = getchar()) != '\n') {
        fputc(c, fp);
    }

    // Close the file
    fclose(fp);

    return 0;
}
