// WAP to find profit or loss of any shopkeeper
#include <stdio.h>
int main()
{
    int sp, cp;
    printf("Enter Selling Price and Cost Price: ");
    scanf("%d%d", &sp, &cp);
    if (sp > cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}