/*A file named DATA contains a series of integer numbers. Code a program to read these numbers and then write
all odd numbers to a file to be called ODD and all even numbers to a file to be called EVEN.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the input file DATA for reading
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file.");
        exit(1);
    }

    // Open the output file EVEN for writing even numbers
    FILE *fpe = fopen("even.txt", "w");
    if (fpe == NULL)
    {
        printf("Cannot create even file");
        fclose(fp);
        exit(1);
    }

    // Open the output file ODD for writing odd numbers
    FILE *fpo = fopen("odd.txt", "w");
    if (fpo == NULL)
    {
        printf("Cannot create odd file");
        fclose(fp);
        fclose(fpe);
        exit(1);
    }

    int num;

    // Read numbers from DATA and categorize them as even or odd
    while (fscanf(fp, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            // Write even number to EVEN file
            fprintf(fpe, "%d ", num);
        }
        else
        {
            // Write odd number to ODD file
            fprintf(fpo, "%d ", num);
        }
    }

    // Close the files
    fclose(fp);
    fclose(fpe);
    fclose(fpo);

    return 0;
}
