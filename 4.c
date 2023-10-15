#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX_SIZE 10000

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        int *ara = (int*)malloc(n * sizeof(int));
        if (ara == NULL)
        {
            //
            return 1;
        }

        memset(ara, 0, n * sizeof(int));

        int maxCount = 0;

        for (int i = 0; i < n; i++)
        {
            int k;
            scanf("%d", &k);
            ara[k]++;
            
            if (ara[k] > maxCount)
            {
                maxCount = ara[k];
            }
        }

        // if (maxCount == n)
        // {
        //     puts("0");
        // }
        // else
        // {
            printf("%d\n", n - maxCount);
        // }

        free(ara);
    }

    return 0;
}
