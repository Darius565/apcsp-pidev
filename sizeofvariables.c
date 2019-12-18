#include<stdio.h>

int main()
{
 int a = 545;
 int b = 600;
 char c = b;
 float d = 1.24;
 double e = 1.397468829;


  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("int b value: %d and size: %d bytes\n", b, sizeof(b));
  printf("char c value: %char and size: %char bytes\n", c, sizeof(c));
  printf("float d value: %float and size: %float bytes\n", d, sizeof(d));
  printf("double e value: %d and size: %d bytes\n", e, sizeof(e));
}

