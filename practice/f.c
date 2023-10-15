#include <stdio.h>
#define SIZE 5
int main()
{
int x,y,z,*ptr,a[SIZE]={25,15,41,35,45};
ptr=a;
x=*ptr++;
y=*++ptr;
z=++*ptr;
printf("%d %d %d",x,y,z);
return 0;
}