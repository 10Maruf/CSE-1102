/*maruf_bro*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define ll long long int

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            swap(&arr[i][j], &arr[j][i]);
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N / 2; ++j)
        {

            swap(&arr[i][j], &arr[i][N - j - 1]);
        }
    }
    puts("");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            printf("%d ", arr[i][j]);

        puts("");
    }
    return 0;
}
