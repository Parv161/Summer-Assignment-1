#include <stdio.h>

int main() {
    int option;
    float balance = 5000, amount;

    do {
        printf("\n1.Deposit\n2.Withdraw\n3.Balance\n4.Exit\n");
        scanf("%d", &option);

        if (option == 1) {
            scanf("%f", &amount);
            balance += amount;
        }
        else if (option == 2) {
            scanf("%f", &amount);

            if (amount <= balance)
                balance -= amount;
            else
                printf("Transaction Failed\n");
        }
        else if (option == 3)
            printf("Balance = %.2f\n", balance);

    } while (option != 4);

    return 0;
}