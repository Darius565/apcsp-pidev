#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;
  float d;
  float* ptrtod;
  float e;
  float* ptrtoe;

  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n\n\n\n\n\n\n", &a);

  e = 10;
  d = 5;
  
  printf("The value of d is %f\n", d);
  printf("The address of d is %f\n", &d);
  printf("The value of e is %f\n", e);
  printf("The address of e is %f\n", &e);
  float temp;
  temp = *ptrtoe;
  *ptrtoe = *ptrtod;
  *ptrtod = temp;

  printf("The new value of d is %f\n", d);
 
  printf("The new value of e is %f\n", e);



}
