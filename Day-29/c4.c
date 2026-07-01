#include <stdio.h>

struct Item {
    int code;
    char name[30];
    int quantity;
};

int main() {
    struct Item item[20];
    int n;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Item Code: ");
        scanf("%d", &item[i].code);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);
    }

    printf("\nInventory Details\n");

    for (int i = 0; i < n; i++)
        printf("%d %s %d\n", item[i].code, item[i].name, item[i].quantity);

    return 0;
}