#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

double sum(double x, int n)
{
    if (n == 1)
        return x;

    double ager = sum(x, n - 1);
    double ekhoner = pow(x, n) / factorial(n);

    return ager + ekhoner;
}

int main()
{
    double x = 3;
    int n = 4;
    double result = sum(x, n);
    printf("%.2lf\n", result);

    return 0;
}
