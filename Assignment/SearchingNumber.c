#include <stdio.h>

int searchNumber(int arr[], int size, int number)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == number)
            return 1;
    }

    return 0;
}

int main()
{
    int arr[] = {5, 2, 8, 12, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (searchNumber(arr, size, number))
        printf("%d is found in the array.\n", number);
    else
        printf("%d is not found in the array.\n", number);

    return 0;
}
