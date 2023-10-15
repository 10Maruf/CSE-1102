#include <stdio.h>

void decimalToOctal(int number)
{
    printf("Octal equivalent: %o\n", number);
}

int main()
{
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    decimalToOctal(number);

    return 0;
}
