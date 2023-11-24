/*
Given a text file, create another text file deleting the following words
"three", "bad", and "time".
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Open the source file for reading
    FILE *fp = fopen("delWords.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open source file.");
        exit(1);
    }

    // Open the destination file for writing
    FILE *fpp = fopen("deletedWords.txt", "w");
    if (fpp == NULL)
    {
        printf("Cannot create or open destination file.");
        fclose(fp);
        exit(1);
    }

    char ch[30];

    // Process the source file and exclude specified words
    while (fscanf(fp, "%s", ch) != EOF)
    {
        if ((strcmp(ch, "three") != 0) && (strcmp(ch, "bad") != 0) && (strcmp(ch, "time") != 0))
        {
            fprintf(fpp, "%s ", ch);
        }
    }

    // Close the files
    fclose(fp);
    fclose(fpp);

    return 0;
}
