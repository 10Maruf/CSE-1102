#include <stdio.h>
void main()
{
    int a = 20;
    int *p;
    int **pp;
    p = &a;
    pp = &p;
    **pp = 20;
    printf("address of a: %u\n", p);
    printf("address of p: %u\n", pp);
    printf("value stored at p: %d\n", *p++);
    printf("address of a: %u\n", p);
    printf("address of a: %d\n", *p);

    printf("value stored at pp: %d\n", **pp--);//note
    printf("address of p: %u\n", pp);
}