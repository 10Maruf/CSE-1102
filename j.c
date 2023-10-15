#include <stdio.h>
/* Function declarations */
int add(int, int);
int sub(int, int);
int main()
{
int sum, diff;
int (* arith)(int, int); // Function pointer declaration
arith = &add; // Function pointer arith points to add()
sum = arith(10, 20); // Call add() using function pointer
arith = sub; // Function pointer arith points to sub()
diff = arith(100, 30); // Call sub() using function pointer
printf("10+20 => %d\n", sum);
printf("100-30 => %d\n", diff);
return 0;
}
/* Function definition */
int add(int num1, int num2)
{
return (num1 + num2);
}
int sub(int num1, int num2)
{
return (num1 - num2);
}