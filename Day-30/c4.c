#include <stdio.h>

void display(int roll[], char name[][30], float marks[], int n) {
    printf("\nStudent Details\n");

    for (int i = 0; i < n; i++)
        printf("%d %s %.2f\n", roll[i], name[i], marks[i]);
}

int main() {
    int roll[20], n;
    float marks[20];
    char name[20][30];

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

    display(roll, name, marks, n);

    return 0;
}