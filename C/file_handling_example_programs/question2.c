// Program to open a file and copy all its content to another file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sfp, *dfp;
    char sourceFile[30], destFile[30], c;

    // Input source and destination file names
    printf("Enter source file name: ");
    gets(sourceFile);
    printf("Enter destination file name: ");
    gets(destFile);

    // Open source file in read mode
    sfp = fopen(sourceFile, "r");
    if (sfp == NULL)
    {
        printf("Source file can't be open.");
        exit(0);
    }

    // Open destination file in append mode
    dfp = fopen(destFile, "w");
    if (dfp == NULL)
    {
        printf("Destination file cannot be created or opened.");
        fclose(sfp); // Close the source file before exiting
        exit(0);
    }

    // Copy content from source to destination
    while ((c = fgetc(sfp)) != EOF)
    {
        fputc(c, dfp);
    }

    printf("\nCopied...");

    // Close both files
    fclose(dfp);
    fclose(sfp);

    return 0;
}
