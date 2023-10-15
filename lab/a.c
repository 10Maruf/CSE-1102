/*maruf_bro*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define ll long long int

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, prod = 1, sum = 0;
        scanf("%d", &a);
        for (int i = 1; i <= a; i++)
        {
            prod *= i;
            sum += i;
        }
        if (!(prod % sum == 0))
        {
            puts("YEAH");
        }
        else
            puts("NAH");
    }

    return 0;
}
