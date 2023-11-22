/*Some text file is given, create another text file replacing the following words
"Ram" to "Hari", "Sita" to "Gita", and "Govinda" to "Shiva"*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp, *fpp;
    char c[20];

    // Open the source file in read mode
    fp = fopen("replace_name.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file.");
        exit(1);
    }

    // Open the destination file in write mode
    fpp = fopen("newReplaced_name.txt", "w");
    if (fpp == NULL)
    {
        printf("Cannot create file");
        fclose(fp);
        exit(1);
    }

    // Read words from the source file and replace specified words
    while (fscanf(fp, "%s", c) != EOF)
    {
        if (strcmp(c, "Ram") == 0)
            fprintf(fpp, "Hari ");
        else if (strcmp(c, "Sita") == 0)
            fprintf(fpp, "Gita ");
        else if (strcmp(c, "Govinda") == 0)
            fprintf(fpp, "Shiva ");
        else
            fprintf(fpp, "%s ", c);
    }

    // Close both files
    fclose(fp);
    fclose(fpp);

    printf("Words replaced successfully.\n");

    return 0;
}
