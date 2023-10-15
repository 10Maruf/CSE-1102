#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct mystructure
{
    int mynum;
    char *mystring;
};

int main()
{
    struct mystructure s1;
    s1.mystring="some text";
    printf("%s",s1.mystring);

    return 0;
}
