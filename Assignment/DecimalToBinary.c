#include <stdio.h>

void intToBinary(int decimal)
{
    if (decimal > 0)
    {
        intToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

void fractionToBinary(double decimal)
{
    double fractionalPart = decimal - (int)decimal;

    if (fractionalPart > 0)
    {
        printf(".");

        while (fractionalPart > 0)
        {
            if (fractionalPart * 2 >= 1)
            {
                printf("1");
                fractionalPart = fractionalPart * 2 - 1;
            }
            else
            {
                printf("0");
                fractionalPart *= 2;
            }
        }
    }
}

void decimalToBinary(double decimal)
{
    int integerPart = (int)decimal;
    double fractionalPart = decimal - integerPart;

    intToBinary(integerPart);
    fractionToBinary(fractionalPart);
}

int main()
{
    double decimal;

    printf("Enter a decimal number: ");
    scanf("%lf", &decimal);

    printf("Binary equivalent: ");
    decimalToBinary(decimal);
    printf("\n");

    return 0;
}
