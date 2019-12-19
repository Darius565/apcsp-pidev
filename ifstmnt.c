#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  int c = 2;
  int d = 3;
  int e = 4;
  int f = 5;
  int g = 7;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (b != 0)
  {
    printf("b is not 0, you win\n");
  }
  else
  {
    printf("b is not 0\n");
  }
  if (c > 1)   
  {
    printf("c is greater than 0\n");
  }
  else
  {
    printf("c is not greater than 0\n");
  }
  if (d >= 4)   
  {
    printf("d is greater than or equal to 4\n");
  }
  else
  {
    printf("d is not greater than or equal to 4\n");
  }
  if (e >= 0 && a == 0)   
  {
    printf("e is greater than 0 and a is equal to 0\n");
  }
  else
  {
    printf("e is not greater than 0 and a is not equal to 0\n");
  }
  if (f == 5 && a >= 0)   
  {
    printf("f is equal to 5 and a is greater than 0\n");
  }
  else
  {
    printf("f is not equal to 5 and a is not greater than 0\n");
  }
  if (!(g == 0))
  {
    printf("g is not equal to 0\n");
  }
  else
  {
    printf("g is equal to 0\n");
  }
}
