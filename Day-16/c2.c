#include <stdio.h>

int main()
{
    int count;

    printf("Enter number of elements: ");
    scanf("%d", &count);

    int numbers[count];

    printf("Enter the elements:\n");
    for (int pos = 0; pos < count; pos++)
    {
        scanf("%d", &numbers[pos]);
    }

    int highestFreq = 0;
    int frequentValue;

    for (int current = 0; current < count; current++)
    {
        int occurrence = 0;

        for (int next = 0; next < count; next++)
        {
            if (numbers[current] == numbers[next])
            {
                occurrence++;
            }
        }

        if (occurrence > highestFreq)
        {
            highestFreq = occurrence;
            frequentValue = numbers[current];
        }
    }

    printf("Element with maximum frequency: %d\n", frequentValue);
    printf("Frequency: %d\n", highestFreq);

    return 0;
}