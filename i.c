/**
* C program to demonstrate constant pointer
*/
#include <stdio.h>
int main()
{
int num1=10, num2;
// Constant pointer to num1
void *const_ptr;
// Assign 10 to num1 using pointer
// Modification of value pointed by pointer is allowed
const_ptr = &num1;
int num2=*((int*)const_ptr);
// Re-assignment of constant pointer
// Modification of pointer value is not allowed
// const_ptr = &num2; // Error
printf("Num1 = %d\n", num1);
printf("Num1 = %d\n", *const_ptr);
return 0;
}