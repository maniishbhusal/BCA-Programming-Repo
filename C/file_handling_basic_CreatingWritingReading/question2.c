// WAP to write some text in your file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open or create a text file named "manish.txt" in write mode
    FILE *ptr = fopen("manish.txt", "w");

    // Check if the file creation was successful
    if (ptr == NULL)
    {
        printf("Cannot create file.\n");
        exit(0);
    }
    else
    {
        printf("Text added to file successfully.\n");
    }

    // Add text to the file
    char str[] = "This is some text added to the file.";
    fputs(str, ptr);

    // Close the file after writing
    fclose(ptr);
    return 0;
}
