#include <stdio.h>

int func()
{
    static int c = 2; // static variable
    c++;
    return c;
}
int a = 4; // global var

int main()
{
    int d = 1;
    int b = 5; // local var
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", func());

    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", func());

    printf("\n");

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", func());

    return 10;
}
