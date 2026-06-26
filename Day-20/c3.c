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

    printf("Row-wise sums:\n");

    for (int i = 0; i < rows; i++) {
        int total = 0;
        for (int j = 0; j < cols; j++)
            total += arr[i][j];
        printf("Row %d = %d\n", i + 1, total);
    }

    return 0;
}