#include <stdio.h>

int main()
{
    int size, target;

    printf("Enter array size: ");
    scanf("%d", &size);

    int data[size];

    printf("Enter array elements:\n");
    for (int index = 0; index < size; index++)
    {
        scanf("%d", &data[index]);
    }

    printf("Enter required sum: ");
    scanf("%d", &target);

    int pairFound = 0;

    for (int first = 0; first < size - 1; first++)
    {
        for (int second = first + 1; second < size; second++)
        {
            if (data[first] + data[second] == target)
            {
                printf("Pair found: %d and %d\n",
                       data[first], data[second]);
                pairFound = 1;
                break;
            }
        }

        if (pairFound)
            break;
    }

    if (!pairFound)
    {
        printf("No matching pair exists.\n");
    }

    return 0;
}