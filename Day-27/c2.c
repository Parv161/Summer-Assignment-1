#include <stdio.h>

struct Employee {
    int id;
    char name[40];
    float salary;
};

int main() {
    struct Employee emp[20];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details\n");

    for (int i = 0; i < n; i++)
        printf("%d %s %.2f\n", emp[i].id, emp[i].name, emp[i].salary);

    return 0;
}