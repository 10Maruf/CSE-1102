#include <stdio.h>

int maruf_bro(long long n)
{
    int count = 0;
    while (n % 2 == 0)
    {
        ++count;
        n /= 2;
    }
    return count;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long n;
        scanf("%lld", &n);

        int one = maruf_bro(n);

        if (one == 1)
        {
            puts("Same");
        }
        else if (one > 1)
        {
            puts("Even");
        }
        else
        {
            puts("Odd");
        }
    }

    return 0;
}
