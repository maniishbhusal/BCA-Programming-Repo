// Given a text file, create another file deleting all the vowels (a,e,i,o,u)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the source file for reading
    FILE *fp = fopen("source.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }

    // Open or create a new file for writing without vowels
    FILE *fp2 = fopen("delVowels.txt", "w");
    if (fp2 == NULL)
    {
        printf("Cannot create or open destination file.\n");
        fclose(fp);
        exit(1);
    }

    char ch;

    // Read characters from the source file
    while ((ch = fgetc(fp)) != EOF)
    {
        // Check if the character is not a vowel, and write to the destination file
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            fputc(ch, fp2);
        }
    }

    // Close both files
    fclose(fp2);
    fclose(fp);

    printf("Vowels removed, and the result is stored in delVowels.txt\n");

    return 0;
}
