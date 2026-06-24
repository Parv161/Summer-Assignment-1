#include <stdio.h>

int main() {
    int size, i, j, minPos, t;

    printf("Enter size: ");
    scanf("%d", &size);

    int a[size];

    for(i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < size - 1; i++) {
        minPos = i;

        for(j = i + 1; j < size; j++) {
            if(a[j] < a[minPos])
                minPos = j;
        }

        t = a[i];
        a[i] = a[minPos];
        a[minPos] = t;
    }

    for(i = 0; i < size; i++)
        printf("%d ", a[i]);

    return 0;
}