// Program to find price of n mangoes given the price of a dozen mangoes
#include <stdio.h>
int main()
{
    float priceDozen, pricen;
    int n;
    printf("Enter price of dozen mangoes: ");
    scanf("%f", &priceDozen);
    printf("Enter number of mangoes: ");
    scanf("%d", &n);
    pricen = priceDozen / 12 * n;
    printf("Price of %d mangoes is %f", n, pricen);
    return 0;
}