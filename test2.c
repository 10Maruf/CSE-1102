#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d;
printf("Enter the values of a b c");
scanf("%f%f%f",&a,&b,&c);
d=sqrt((b*b)-(4.0*a*c));
x1=(-b-d)/(2.0*a);
x2=(b-d)/(2.0*a);
printf("%f\n %f\n %f\n",d,x1,x2);
int v=pow(2,2);
}
