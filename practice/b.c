#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int a[3][];
    int i,j;
    // for reading value: -
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // For displaying value: -
    // for (i = 0; i < 4; i++)
    // {
        // for (j = 0; j < 3; j++)
        // {
        puts("");
            printf("%d\t", a[1][1]);
        // }
    // }
    return 0;
}
