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
        int w, g;
        scanf("%d%d", &w, &g);
        w = w - g;
        float final = (float)w / 2.0;

        if (!(floor(final) == final))
        {
            printf("%0.4f\n", final);
        }

        else
            printf("%d\n", (w / 2));
    }

    return 0;
}
