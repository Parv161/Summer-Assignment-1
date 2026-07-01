#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("1. Capital of India?\n");
    printf("1.Delhi\n2.Mumbai\n3.Kolkata\n4.Chennai\n");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n2. 15 + 10 = ?\n");
    printf("1.20\n2.25\n3.30\n4.35\n");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n3. C language developed by?\n");
    printf("1.Dennis Ritchie\n2.Bjarne Stroustrup\n3.James Gosling\n4.Guido van Rossum\n");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\nFinal Score = %d/3\n", score);

    return 0;
}