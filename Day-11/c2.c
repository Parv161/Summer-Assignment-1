#include <stdio.h>

int maximum(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    int n;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum number is: %d\n", maximum(arr, n));

    return 0;
}