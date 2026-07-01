#include <stdio.h>

int main() {
    char s[200];

    printf("Enter string: ");
    scanf("%s", s);

    int i = 0;

    while (s[i]) {
        int c = 1;

        while (s[i] == s[i + 1]) {
            c++;
            i++;
        }

        printf("%c%d", s[i], c);
        i++;
    }

    return 0;
}