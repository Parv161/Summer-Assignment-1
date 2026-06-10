#include <stdio.h>

int main() {
    int num;
    int largestFactor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestFactor = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %d", largestFactor);

    return 0;
}