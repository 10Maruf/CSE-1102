#include<stdio.h>  
int main()  
{  
   int j;  
   char s[] = "javaTpoint";  
   for(j=0; s[j]!=NULL; j++);  
      printf("%d \n", j);  
     
   j=0;   
   while(s[++j]);  
      printf("%d ", j);  
}