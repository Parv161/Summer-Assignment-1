#include <stdio.h>

int main() {
    char text[200];
    int count[256] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]", text);

    for (int i = 0; text[i] != '\0'; i++)
        count[(unsigned char)text[i]]++;

    for (int i = 0; text[i] != '\0'; i++) {
        if (count[(unsigned char)text[i]] == 1) {
            printf("First non-repeating character: %c", text[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");
    return 0;
}