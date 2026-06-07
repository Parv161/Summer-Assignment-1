#include <stdio.h>

int main() {
    int num, product = 1, rem;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (; num != 0; num /= 10) {
        rem = num % 10;
        product = product * rem;
    }
    
    printf("Product of digits: %d\n", product);
    
    return 0;
}