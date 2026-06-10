#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors are: ");

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num = num / i;
        }
    }

    return 0;
}