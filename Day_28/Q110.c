#include <stdio.h>

int main() {
    int accountNumber;
    char accountHolder[50];
    float balance, deposit, withdraw;

    printf("===== Bank Account System =====\n\n");

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", accountHolder);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    // Deposit
    printf("\nEnter Deposit Amount: ");
    scanf("%f", &deposit);
    balance += deposit;

    // Withdraw
    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdraw);

    if (withdraw <= balance) {
        balance -= withdraw;
        printf("Withdrawal Successful.\n");
    } else {
        printf("Insufficient Balance!\n");
    }

    // Display Account Details
    printf("\n=====================================\n");
    printf("         BANK ACCOUNT DETAILS\n");
    printf("=====================================\n");
    printf("Account Number : %d\n", accountNumber);
    printf("Account Holder : %s\n", accountHolder);
    printf("Current Balance: %.2f\n", balance);
    printf("=====================================\n");

    return 0;
}