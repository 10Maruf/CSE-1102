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
    char ch;
    scanf("%c",&ch);
    int a, b;
    scanf("%d%d", &a, &b);
    if (ch == 'A')
    {
        printf("%d", a + b);
    }
    else if (ch == 'S')
    {
        printf("%d", a - b);
    }
    else
        printf("%d", a * b);

    return 0;
}
