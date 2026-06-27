#include <stdio.h>

int main()
{
    char text[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0' && text[i] != '\n')
    {
        i++;
    }

    printf("Length of the string = %d", i);

    return 0;
}