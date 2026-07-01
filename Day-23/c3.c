#include <stdio.h>

int main() {
    char first[100], second[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    scanf("%s", first);

    printf("Enter second string: ");
    scanf("%s", second);

    int i = 0;

    while (first[i]) {
        freq[(unsigned char)first[i]]++;
        i++;
    }

    i = 0;

    while (second[i]) {
        freq[(unsigned char)second[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}