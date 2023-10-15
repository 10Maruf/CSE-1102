#include <stdio.h>

void printPyramid(int rows) {
    int pyramid[rows][2 * rows - 1];
    int i, j, space;

    // Initialize the pyramid array with spaces
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2 * rows - 1; j++) {
            pyramid[i][j] = ' ';
        }
    }

    // Fill the pyramid array with asterisks
    for (i = 0; i < rows; i++) {
        for (j = rows - i - 1; j <= rows + i - 1; j++) {
            pyramid[i][j] = '*';
        }
    }

    // Print the pyramid
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2 * rows - 1; j++) {
            printf("%c", pyramid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPyramid(rows);

    return 0;
}
