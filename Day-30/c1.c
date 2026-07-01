#include <stdio.h>

int main() {
    int roll[20], n;
    char name[20][40];
    float marks[20];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");

    for (int i = 0; i < n; i++)
        printf("%d %s %.2f\n", roll[i], name[i], marks[i]);

    return 0;
}