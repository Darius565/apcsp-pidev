#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;
  int d;
  int* ptrtod;
  int e;
  int* ptrtoe;

  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  e = 10;
  d = 5;
  printf("The value of d is %d\n", d);
  printf("The address of d is %d\n", &d);
  printf("The value of e is %d\n", e);
  printf("The address of e is %d\n", &e);

  printf("The new value of d is %d\n",  );
  printf("The new value of e is %d\n",  );


}
