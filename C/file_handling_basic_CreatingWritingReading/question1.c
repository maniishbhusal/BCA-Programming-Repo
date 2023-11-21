/* WAP to create a text file of your name. Check whether the file is created
or not and display the message accordingly.*/
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
        printf("File is created.\n");
    }

    // Close the file after use
    fclose(ptr);
    return 0;
}
