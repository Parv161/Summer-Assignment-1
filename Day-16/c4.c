#include <stdio.h>

int main()
{
    int totalNums;

    printf("Enter the size of the array: ");
    scanf("%d", &totalNums);

    int values[totalNums];

    printf("Enter %d elements:\n", totalNums);
    for (int idx = 0; idx < totalNums; idx++)
    {
        scanf("%d", &values[idx]);
    }

    printf("Array after removing duplicate elements:\n");

    for (int current = 0; current < totalNums; current++)
    {
        int alreadyPresent = 0;

        for (int previous = 0; previous < current; previous++)
        {
            if (values[current] == values[previous])
            {
                alreadyPresent = 1;
                break;
            }
        }

        if (alreadyPresent == 0)
        {
            printf("%d ", values[current]);
        }
    }

    printf("\n");

    return 0;
}