// Program to find the size of a given file student.txt
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare a variable to store the size of the file
    long int size;

    // Open the file in read mode
    FILE *fp = fopen("student.txt", "r");

    // Check if the file is successfully opened
    if (fp == NULL)
    {
        perror("Error opening file"); // Print error message
        exit(EXIT_FAILURE);           // Exit the program with failure status
    }

    // Move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // Get the current position of the file pointer, which represents the size of the file
    size = ftell(fp);

    // Print the size of the file
    printf("Size of the file student.txt = %ld bytes\n", size);

    // Close the file
    fclose(fp);

    return 0;
}
