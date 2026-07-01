#include <stdio.h>

int main() {
    int choice;
    float x, y;

    do {
        printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f%f", &x, &y);
        }

        switch (choice) {
            case 1:
                printf("Result = %.2f", x + y);
                break;
            case 2:
                printf("Result = %.2f", x - y);
                break;
            case 3:
                printf("Result = %.2f", x * y);
                break;
            case 4:
                if (y != 0)
                    printf("Result = %.2f", x / y);
                else
                    printf("Division by zero is not allowed.");
                break;
        }

    } while (choice != 5);

    return 0;
}