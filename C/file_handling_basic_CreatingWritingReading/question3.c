//  WAP to read the written text from the file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the file "manish.txt" in read mode
    FILE *ptr = fopen("manish.txt", "r");
    char str[100];

    // Check if the file opening was successful
    if (ptr == NULL)
    {
        printf("Cannot open file.\n");
        exit(0);
    }
    else
    {
        printf("File is opened.\n");
    }

    // Read text from the file
    fgets(str, 100, ptr);

    // Display the text from the file
    printf("\nText from file is:\n%s", str);

    // Close the file after reading
    fclose(ptr);
    return 0;
}
