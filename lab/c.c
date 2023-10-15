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
    char num[100];
    scanf("%s", num);
    int i = 0, sum = 0, sum1 = 0, rem;
    while (num[i] != '\0')
    {
        sum += (num[i] - '0');
        i++;
    }
    // printf("%d",sum);
    if (sum < 10)
    {
        printf("%d", sum);
    }
    else
    {
    label:
        while (sum != 0)
        {
            sum1 += sum % 10;
            sum = sum / 10;
        }
        if (sum1 < 10)
        {
            printf("%d", sum1);
        }
        else
        {
            sum = sum1;
            sum1 = 0;
            goto label;
        }
    }

    return 0;
}
