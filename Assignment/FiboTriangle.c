#include <stdio.h>

void printFibonacciTriangle(int row)
{

    printf("Fibonacci Triangle:\n");

    for (int i = 1; i <= row; i++)
    {
    int a = 0, b = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", b);
            int next = a + b;
            a = b;
            b = next;
        }

        printf("\n");
    }
}

int main()
{
    int row;

    printf("Enter the row: ");
    scanf("%d", &row);

    printFibonacciTriangle(row);

    return 0;
}
