#include <stdio.h>

int reverseNumber(int number)
{
    int reversed = 0;

    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return reversed;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int reversedNumber = reverseNumber(number);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
