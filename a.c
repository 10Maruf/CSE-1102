#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int ara[3];
    int sum = 0;
    int k;
    scanf("%d", &k);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (int i = 1; i <= 500000000; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += ara[j];
            if (sum > k)
            {
                if (j == 1)
                {
                    printf("M");
                }
                else if (j == 0)
                {
                    printf("F");
                }
                else
                {
                    printf("T");
                }
                break;
            }
        }
        if (sum > k)
        {
            break;
        }
    }
    return 0;
}
