// Program to illustrate the uses of fseek, ftell and rewind in random access file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the file in read/write mode
    FILE *fp = fopen("student.txt", "r+");

    // Check if file is opened successfully
    if (fp == NULL)
    {
        printf("Error while opening the file!\n");
        exit(1);
    }

    // Display the current position pointer in the file
    printf("Position Pointer: %ld\n", ftell(fp));

    // Move the file position to the end of the file
    fseek(fp, 0, 2);

    // Display the current position pointer after fseek
    printf("Position Pointer: %ld\n", ftell(fp));

    // Rewind the file position pointer to the beginning of the file
    rewind(fp);

    // Display the current position pointer after rewind
    printf("Position Pointer: %ld\n", ftell(fp));

    // Close the file
    fclose(fp);

    return 0;
}
