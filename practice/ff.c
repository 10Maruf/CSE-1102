#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int display (int n)  
{  
    if(n == 0)  
        return 0; // terminating condition  
    else   
    {  
        printf("%d",n);  
        return display(n-1); // recursive call  
    }  
} 
int main()
{
    display(4);
    return 0;
}
