#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  a = c;
  c = 2;
  printf("A is now %d and C is %d\n", a, c);
}
