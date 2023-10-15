#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void Triangle(int n)
{

    for (int r = 1; r <= n; r++)
    {

        for (int c = 1; c <= n - r; c++)
        {
            printf(" ");
        }

        for (int c = 1; c <= r; c++)
        {
            printf("%d", c);
        }

        for (int c = r - 1; c >= 1; c--)
        {
            printf("%d", c);
        }

        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Triangle(n);
    return 0;
}
