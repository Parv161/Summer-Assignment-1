#include <stdio.h>

long long nthFibonacci(int n)
{
    if (n < 0)
        return -1;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    long long a = 0;
    long long b = 1;

    for (int i = 2; i <= n; i++)
    {
        long long c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;

    printf("Enter the nth term you want in the fibonacci series : ");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    long long result = nthFibonacci(n);

    if (result == -1)
    {
        printf("n must be non-negative\n");
        return 1;
    }

    printf("F(%d) = %lld\n", n, result);

    return 0;
}