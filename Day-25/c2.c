#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int mark[256] = {0};

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    for (int i = 0; s2[i]; i++)
        mark[(unsigned char)s2[i]] = 1;

    printf("Common characters: ");

    for (int i = 0; s1[i]; i++) {
        if (mark[(unsigned char)s1[i]]) {
            printf("%c ", s1[i]);
            mark[(unsigned char)s1[i]] = 0;
        }
    }

    return 0;
}