#include <stdio.h>

int main() {
    char s[200];
    int used[256] = {0};

    printf("Enter string: ");
    scanf("%[^\n]", s);

    for (int i = 0; s[i]; i++) {
        unsigned char ch = s[i];

        if (!used[ch]) {
            printf("%c", ch);
            used[ch] = 1;
        }
    }

    return 0;
}