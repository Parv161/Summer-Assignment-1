#include <stdio.h>

struct Book {
    int id;
    char title[50];
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
    }

    printf("\nLibrary Records\n");

    for (int i = 0; i < n; i++)
        printf("%d %s\n", b[i].id, b[i].title);

    return 0;
}