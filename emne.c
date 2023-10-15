#include <stdio.h>

int fibonacci(int n)
{
  if (n == 1)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
  int terms;

  printf("Enter the number of terms: ");
  scanf("%d", &terms);

  printf("%d", fibonacci(terms));

  return 0;
}
