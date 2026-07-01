#include <stdio.h>

struct Employee {
    int id;
    char name[40];
    char department[30];
};

int main() {
    struct Employee emp[20];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Department: ");
        scanf("%s", emp[i].department);
    }

    printf("\nEmployee Records\n");

    for (int i = 0; i < n; i++)
        printf("%d %s %s\n", emp[i].id, emp[i].name, emp[i].department);

    return 0;
}