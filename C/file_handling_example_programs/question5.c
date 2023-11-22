/*Define a structure for Vehicle Owner having data members name, address, telephone member, vehicle number
and license number. Take the data for 3 owners, write them in file "own.txt". Read the data from the file
and display them.*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 2

struct vehicle_owner
{
    char name[30];
    char address[30];
    int telephone;
    int vehicle_num;
    int license_num;
};

int main()
{
    struct vehicle_owner vehicle[SIZE], v[SIZE];

    // Open the file in write mode
    FILE *fp = fopen("own.txt", "w");
    if (fp == NULL)
    {
        printf("Cannot create file.");
        exit(1);
    }

    // Input data for vehicle owners and write to file
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter information about vehicle owner %d", i + 1);
        printf("\nEnter name: ");
        scanf(" %[^\n]s", vehicle[i].name);
        printf("\nEnter address: ");
        scanf(" %[^\n]s", vehicle[i].address);
        printf("\nEnter telephone number: ");
        scanf("%d", &vehicle[i].telephone);
        printf("\nEnter vehicle number: ");
        scanf("%d", &vehicle[i].vehicle_num);
        printf("\nEnter license number: ");
        scanf("%d", &vehicle[i].license_num);

        // Write data to the file
        fprintf(fp, "%s\t%s\t%d\t%d\t%d\t\n",
                vehicle[i].name, vehicle[i].address, vehicle[i].telephone, vehicle[i].vehicle_num, vehicle[i].license_num);
    }
    fclose(fp);

    // Open the file in read mode
    fp = fopen("own.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open file for reading.");
        exit(1);
    }

    // Read data from the file and display
    printf("\nData read from file:\n");
    for (int i = 0; i < SIZE; i++)
    {
        fscanf(fp, "%s %s %d %d %d", v[i].name, v[i].address, &v[i].telephone, &v[i].vehicle_num, &v[i].license_num);
        printf("%s\t%s\t%d\t%d\t%d\n", v[i].name, v[i].address, v[i].telephone, v[i].vehicle_num, v[i].license_num);
    }
    fclose(fp);

    return 0;
}
