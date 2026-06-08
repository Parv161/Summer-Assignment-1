#include <stdio.h>

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 || b == 0) {
        printf("LCM = 0\n");
        return 0;
    }

    printf("LCM of %d and %d = %d\n", a, b, lcm(a, b));
    return 0;
}