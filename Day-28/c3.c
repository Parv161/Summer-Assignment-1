#include <stdio.h>

int main() {
    int seats = 50;
    int book;

    while (1) {
        printf("\nAvailable Seats : %d\n", seats);
        printf("Enter seats to book (0 to Exit): ");
        scanf("%d", &book);

        if (book == 0)
            break;

        if (book <= seats) {
            seats -= book;
            printf("Booking Successful\n");
        }
        else
            printf("Not Enough Seats\n");
    }

    return 0;
}