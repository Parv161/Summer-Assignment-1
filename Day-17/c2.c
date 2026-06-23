#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i, j, k = 0, flag;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[k++] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < m; i++)
    {
        flag = 0;

        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            c[k++] = b[i];
        }
    }

    printf("Union Array: ");

    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}