#include <stdio.h>

unsigned long long factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d: %llu\n", number, factorial(number));

    return 0;
}
