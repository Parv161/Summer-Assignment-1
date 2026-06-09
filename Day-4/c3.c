#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;
    int digits = 0;

    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}