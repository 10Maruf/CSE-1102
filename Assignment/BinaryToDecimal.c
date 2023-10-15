#include <stdio.h>
#include <math.h>

int convertIntegerPart(char binary[])
{
    int i, integerPart = 0;

    for (i = 0; binary[i] != '\0' && binary[i] != '.'; i++)
    {
        integerPart = integerPart * 2 + (binary[i] - '0');
    }

    return integerPart;
}

double convertFractionalPart(char binary[])
{
    int i;
    double fractionalPart = 0.0;
    int decimalPointIndex = -1;

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '.')
        {
            decimalPointIndex = i;
            break;
        }
    }

    for (i = decimalPointIndex + 1; binary[i] != '\0'; i++)
    {
        fractionalPart = fractionalPart * 2 + (binary[i] - '0');
    }

    return fractionalPart / pow(2, i - decimalPointIndex - 1);
}

double binaryToDecimal(char binary[])
{
    int integerPart = convertIntegerPart(binary);
    double fractionalPart = convertFractionalPart(binary);

    double decimal = integerPart + fractionalPart;
    return decimal;
}

int main()
{
    char binary[100];
    printf("Enter a binary number with a fractional part: ");
    scanf("%s", binary);

    double decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %f\n", decimal);

    return 0;
}
