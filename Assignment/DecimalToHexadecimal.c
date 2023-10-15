#include <stdio.h>

void decimalToHexadecimal(int number)
{
    printf("Hexadecimal equivalent: %X\n", number);
}

int main()
{
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    decimalToHexadecimal(number);

    return 0;
}
