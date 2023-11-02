/*In a bank there are n customers with attributes name, account_no, and balance. Write a program
to find out who has the highest balance in the bank.*/
#include <stdio.h>
#define N 100

struct Account
{
    int account_no;
    char name[20];
    float balance;
};

int main()
{
    struct Account customer[N];
    int n;

    // Input the number of customers
    printf("How many customers: ");
    scanf("%d", &n);

    // Input data for each customer
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter data for customer %d:\n", i + 1);
        printf("Enter account no: ");
        scanf("%d", &customer[i].account_no);
        printf("Enter name: ");
        scanf(" %s", customer[i].name);
        printf("Enter balance: ");
        scanf("%f", &customer[i].balance);
    }

    // Find the customer with the highest balance
    float max_balance = customer[0].balance;
    int max_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (customer[i].balance > max_balance)
        {
            max_balance = customer[i].balance;
            max_index = i;
        }
    }

    // Display information about the customer with the highest balance
    printf("\nCustomer with the highest balance:\n");
    printf("Account number: %d\n", customer[max_index].account_no);
    printf("Name: %s\n", customer[max_index].name);
    printf("Balance: %.2f\n", customer[max_index].balance);

    return 0;
}
