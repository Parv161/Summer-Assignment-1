#include <stdio.h>

int main()
{
    int limit;

    printf("Enter the value of n: ");
    scanf("%d", &limit);

    int list[limit - 1];

    printf("Enter %d elements:\n", limit - 1);

    int collectedSum = 0;

    for (int k = 0; k < limit - 1; k++)
    {
        scanf("%d", &list[k]);
        collectedSum += list[k];
    }

    int expectedSum = limit * (limit + 1) / 2;
    int missingValue = expectedSum - collectedSum;

    printf("Missing number is: %d\n", missingValue);

    return 0;
}