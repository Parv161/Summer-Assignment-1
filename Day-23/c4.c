#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};
    char ans = 0;
    int highest = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > highest) {
            highest = freq[i];
            ans = i;
        }
    }

    printf("Maximum occurring character: %c", ans);
    return 0;
}