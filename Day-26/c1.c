#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too High\n");
        else if (guess < secret)
            printf("Too Low\n");
        else
            printf("Correct!\n");

    } while (guess != secret);

    return 0;
}