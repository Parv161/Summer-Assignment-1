#include <stdio.h>

struct Book {
    int id;
    char title[50];
    int issued;
};

int main() {
    struct Book b[20];
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Issued (1/0): ");
        scanf("%d", &b[i].issued);
    }

    printf("\nLibrary Records\n");

    for (int i = 0; i < n; i++)
        printf("%d %s %s\n", b[i].id, b[i].title, b[i].issued ? "Issued" : "Available");

    return 0;
}