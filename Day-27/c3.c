#include <stdio.h>

int main() {
    int id;
    float basic, hra, da, total;

    printf("Employee ID: ");
    scanf("%d", &id);

    printf("Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    total = basic + hra + da;

    printf("\nEmployee ID : %d\n", id);
    printf("Gross Salary : %.2f", total);

    return 0;
}