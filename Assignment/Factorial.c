#include <stdio.h>

int fact(int n) // function to calculate factorial of a number
{
    int a;

    for (a = 1; n > 1; n--)
        a *= n;

    return a;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d: %d\n", number, fact(number));

    return 0;
}
