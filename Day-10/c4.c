#include <stdio.h>

int main() {
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    char ch;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        ch = 'A';
        for(int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        ch -= 2;
        for(int j = 1; j < i; j++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}