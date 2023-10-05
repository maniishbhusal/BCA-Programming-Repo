/*C program that input Cost Price(CP) and Selling Price(SP) of a product
and calculate profit or loss.*/
#include <stdio.h>
int main()
{
    float CP, SP, profit, loss;
    printf("Enter Cost Price: ");
    scanf("%f", &CP);
    printf("Enter Selling Price: ");
    scanf("%f", &SP);
    if (SP > CP)
    {
        profit = SP - CP;
        printf("Profit = %.2f", profit);
    }
    else
    {
        loss = CP - SP;
        printf("Loss = %.2f", loss);
    }
    return 0;
}
