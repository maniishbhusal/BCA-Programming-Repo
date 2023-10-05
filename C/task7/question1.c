/* WAP to find whether the customer is in profit, profit or in equal situation.
(ELSE IF LADDER)*/
#include <stdio.h>
int main()
{
    int sp, cp, amount = 0;
    printf("Enter SP and CP: ");
    scanf("%d%d", &sp, &cp);
    if (sp > cp)
    {
        amount = sp - cp;
        printf("Profit and the amount is %d", amount);
    }
    else if (sp < cp)
    {
    	amount=cp-sp;
        printf("Loss and the amount is %d", amount);
    }
    else
    {
        printf("Equal to");
    }
    return 0;
}
