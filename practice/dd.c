#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 100
#define A 2
int main()
{
    int a;
    a=A;
    while (a<N)
    {
        printf("%d\n",a);
        a=a*a;
    }
    
    return 0;
}
