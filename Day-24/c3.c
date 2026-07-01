#include <stdio.h>

int main() {
    char line[300], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter sentence: ");
    scanf("%[^\n]", line);

    while (1) {
        if (line[i] == ' ' || line[i] == '\0') {
            word[j] = '\0';

            if (j > max) {
                max = j;
                int k = 0;
                while (word[k]) {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }

            j = 0;

            if (line[i] == '\0')
                break;
        } else {
            word[j++] = line[i];
        }

        i++;
    }

    printf("Longest word: %s", longest);
    return 0;
}