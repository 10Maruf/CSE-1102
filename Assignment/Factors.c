#include <stdio.h>
#include <math.h>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void findFactors(int number)
{
    int factors[100];
    int count = 0;

    int sqrtNum = sqrt(number);

    // Store factors from 1 to square root of the number
    for (int i = 1; i <= sqrtNum; i++)
    {
        if (number % i == 0)
        {
            factors[count++] = i;

            // If the divisor is not the square root itself, store the corresponding factor
            if (i != sqrtNum)
            {
                factors[count++] = number / i;
            }
        }
    }

    // Sort the factors in ascending order
    bubbleSort(factors, count);

    printf("Factors of %d in ascending order: ", number);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", factors[i]);
    }

    printf("\n");
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    findFactors(number);

    return 0;
}
