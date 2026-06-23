#include <stdio.h>

int main()
{
    int first[100], second[100];
    int size1, size2;
    int p, q;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter elements of first array:\n");
    for(p = 0; p < size1; p++)
    {
        scanf("%d", &first[p]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter elements of second array:\n");
    for(p = 0; p < size2; p++)
    {
        scanf("%d", &second[p]);
    }

    printf("Common elements are: ");

    for(p = 0; p < size1; p++)
    {
        for(q = 0; q < size2; q++)
        {
            if(first[p] == second[q])
            {
                printf("%d ", first[p]);
                break;
            }
        }
    }

    return 0;
}