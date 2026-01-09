#include <stdio.h>

struct Account
{
    int accNo;
    char accHolderName[30];
    double balance;
};

struct Account storeAccount(struct Account tempAcc)
{
    printf("Enter Account Number: ");
    scanf("%d", &tempAcc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", tempAcc.accHolderName);

    printf("Enter Account Balance: ");
    scanf("%lf", &tempAcc.balance);
    return tempAcc;
}

void displayAccount(struct Account a)
{
    printf("\n--- Account Details ---\n");
    printf("Account Number : %d\n", a.accNo);
    printf("Account Holder : %s\n", a.accHolderName);
    printf("Balance        : %.2lf\n", a.balance);
}

int main()
{
    struct Account acc;

    acc = storeAccount(acc);
    displayAccount(acc);

    return 0;
}
