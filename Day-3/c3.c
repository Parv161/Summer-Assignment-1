#include <stdio.h>

int gcd(int a, int b) {
    int result = 1;
    int smaller = (a < b) ? a : b;

    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0)
            result = i;
    }
    return result;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
    return 0;
}