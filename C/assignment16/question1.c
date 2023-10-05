// WAP to search an element in an array.
#include <stdio.h>
#define MAX 5
int main()
{
    int number[MAX], key;
    for (int i = 0; i < MAX; i++)
    {
        printf("Enter the %d th elements of array: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("Enter the number you want to search in array: ");
    scanf("%d", &key);

    // Search for the key in the array
    int found = 0; // A flag to indicate whether the key is found

    for (int i = 0; i < MAX; i++)
    {
        if (number[i] == key)
        {
            printf("%d was found at index %d", key, i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("%d was not found.", key);
    }
    return 0;
}