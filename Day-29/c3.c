#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n1.Length\n2.Reverse\n3.Uppercase\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
                for (int i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;

            case 3:
                for (int i = 0; str[i]; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        printf("%c", str[i] - 32);
                    else
                        printf("%c", str[i]);
                }
                printf("\n");
                break;
        }

    } while (choice != 4);

    return 0;
}