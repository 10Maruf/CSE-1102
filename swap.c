#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int ara[2] = {1, 2}, ara2[2] = {3, 4};
    swap(&ara[0], &ara2[0]);
    printf("%d", ara[0]);
    int a = 2, b = 4;
    swap(&a, &b);
    printf("  %d", b);
    return 0;
}
