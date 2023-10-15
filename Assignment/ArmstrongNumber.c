#include <stdio.h>
#include <stdbool.h>

bool armstrong(int number)
{
    int originalNumber = number;
    int sum = 0;

    while (number != 0)
    {
        int digit = number % 10;
        sum += (digit * digit * digit);
        number /= 10;
    }
    // printf("%d",sum);

    return (originalNumber == sum);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (armstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
