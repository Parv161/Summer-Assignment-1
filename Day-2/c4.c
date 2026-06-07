#include <stdio.h>

int main() {
    int num, reverse = 0, rem, original;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    for (; num != 0; num /= 10) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
    }
    
    if (original == reverse) {
        printf("%d is a Palindrome\n", original);
    } else {
        printf("%d is not a Palindrome\n", original);
    }
    
    return 0;
}