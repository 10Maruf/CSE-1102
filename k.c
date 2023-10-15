#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers;
    int size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocate memory dynamically for the array
    numbers = (int*)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read input values
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", numbers+i);
    }

    // Display the input numbers
    printf("You entered: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(numbers+i));
    }

    // Free the allocated memory
    free(numbers);

    return 0;
}
