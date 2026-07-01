#include <stdio.h>

struct Contact {
    char name[40];
    char phone[20];
};

int main() {
    struct Contact c[20];
    int n;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone: ");
        scanf("%s", c[i].phone);
    }

    printf("\nContact List\n");

    for (int i = 0; i < n; i++)
        printf("%s  %s\n", c[i].name, c[i].phone);

    return 0;
}