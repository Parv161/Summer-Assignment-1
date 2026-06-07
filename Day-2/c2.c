#include <stdio.h>

int main() {
    int num, reverse = 0, rem;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (; num != 0; num /= 10) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
    }
    
    printf("Reversed number: %d\n", reverse);
    
    return 0;
}