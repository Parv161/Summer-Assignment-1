#include <stdio.h>

int main()
{
    char line[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(line, sizeof(line), stdin);

    while (line[i] == ' ')
    {
        i++;
    }

    if (line[i] != '\0' && line[i] != '\n')
    {
        words = 1;
    }

    while (line[i] != '\0')
    {
        if (line[i] == ' ' && line[i + 1] != ' ' && line[i + 1] != '\0' && line[i + 1] != '\n')
        {
            words++;
        }
        i++;
    }

    printf("Total words = %d", words);

    return 0;
}