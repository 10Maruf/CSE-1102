#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int y = 1, x, n;
    scanf("%d%d", &x, &n);
    for (int i = 0; i < n; i++)
    {
        y = y * x;
    }
    printf("%d", y);

    return 0;
}
