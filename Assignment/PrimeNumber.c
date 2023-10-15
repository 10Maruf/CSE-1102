#include <stdio.h>

int isPrime(int number)
{
    if (number <= 1)
        return 0;

    for (int i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

void printPrimeSeries(int n)
{
    printf("Prime number series up to %d: ", n);

    for (int i = 2; i <= n; ++i)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printPrimeSeries(n);

    return 0;
}
