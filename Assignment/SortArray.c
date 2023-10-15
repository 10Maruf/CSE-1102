#include <stdio.h>
#include <stdlib.h>

// Comparison function
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int ara[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(ara) / sizeof(ara[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    qsort(ara, size, sizeof(int), cmp);//using quick_sort 

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    return 0;
}
