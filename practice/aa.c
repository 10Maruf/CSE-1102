#include <stdio.h>  
#include <conio.h>  
int twinprime(int a);
int main ()  
{  
    // declare variables  
    int i, num, count = 0;  
    printf (" Enter the last number: ");  
    scanf (" %d", &num); // get the last number  
      
    for (i = 2; i <= num; i++)  
    {  
        if (twinprime (i) && twinprime (i+2))  
        {  
            printf (" \n The twin prime number is: (%d, %d) ", i, i+2);  
            count++; // counter increment by 1  
        }  
    }  
    printf (" \n \n Total number of twin prime pairs: %d", count);  
    return 0;  
}  
// function definition   
int twinprime( int n)  
{  
    int i = 2;  
    // use for loop to find the twin prime  
    for (i = 2; i <= n/2; i++)  
    {  
        // if n is completely divisible by 1 without leaving any remainder, it returns 0  
        if (n%i == 0)  
            return 0;  
    }  
    // otherwise it returns 1  
   
        return 1;  
}