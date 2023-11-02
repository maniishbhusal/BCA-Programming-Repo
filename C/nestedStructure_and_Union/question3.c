// Program to demonstrate the use of pointer to structure.
#include <stdio.h>

// Define the structure for Book
struct Book
{
    char name[50];
    int pages;
    float price;
};

int main()
{
    // Declare an array of Book structures and a pointer to Book
    struct Book b[2], *ptr = b;

    // Input details for each book
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name: ");
        scanf(" %[^\n]s", (ptr + i)->name);

        printf("Enter number of pages: ");
        scanf("%d", &(ptr + i)->pages);

        printf("Enter price: ");
        scanf("%f", &(ptr + i)->price);

        printf("\n");
    }

    // Display Book details
    printf("\nBook Details:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s\nTotal Pages: %d\nPrice: %.2f\n", (ptr + i)->name, (ptr + i)->pages, (ptr + i)->price);
        printf("\n");
    }

    return 0;
}
