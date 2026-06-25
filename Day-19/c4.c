#include <stdio.h>

int main() {
    int n, total = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[20][20];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        total += mat[i][i];
    }

    printf("Diagonal Sum = %d", total);

    return 0;
}