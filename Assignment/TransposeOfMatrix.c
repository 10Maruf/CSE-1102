#include <stdio.h>

void transposeMatrix(int matrix[][3], int rows, int columns)
{
    int transpose[columns][rows];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < columns; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};

    printf("Original matrix:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(matrix, 3, 3);

    return 0;
}
