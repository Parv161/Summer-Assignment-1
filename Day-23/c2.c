#include <stdio.h>

int main() {
    char text[200];
    int seen[256] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]", text);

    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = text[i];
        if (seen[ch]) {
            printf("First repeating character: %c", ch);
            return 0;
        }
        seen[ch] = 1;
    }

    printf("No repeating character found.");
    return 0;
}