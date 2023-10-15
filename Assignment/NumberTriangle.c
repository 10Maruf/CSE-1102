#include <stdio.h>

void printNumberTriangle(int n)
{
    printf("Number Triangle:\n");

    for (int row = 1; row <= n; row++)
    {
        // Print spaces for alignment
        for (int col = 1; col <= n - row; col++)
        {
            printf(";");
        }

        // Print ascending numbers
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }

        // Print descending numbers
        for (int col = row - 1; col >= 1; col--)
        {
            printf("%d", col);
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printNumberTriangle(n);

    return 0;
}
