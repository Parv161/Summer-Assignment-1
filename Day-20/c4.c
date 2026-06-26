#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[20][20];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    printf("Column-wise sums:\n");

    for (int j = 0; j < cols; j++) {
        int total = 0;
        for (int i = 0; i < rows; i++)
            total += arr[i][j];
        printf("Column %d = %d\n", j + 1, total);
    }

    return 0;
}