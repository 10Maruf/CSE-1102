#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    int b;
    double c, d, e, f, g;
    // squrt root
    printf("Enter a number=");
    scanf("%d", &b);
    c = sqrt(b);
    printf("%lf\n \n", c);

    // ceilling and floar
    printf("enter a number for ceiling & floor=");
    scanf("%lf", &d);
    printf("floor=%.2lf\n selling=%.2lf\n \n", floor(d), ceil(d));

    // power
    printf("Enter 2 number\n 1st base 2nd power=");
    scanf("%lf %lf", &e, &f);
    printf("power=%.3lf\n \n", pow(e, f));

    //absolate value
    printf("Enter a number=");
    scanf("%lf", &g);
    printf("Absolate value =%d",abs(g));
    return 0;
}