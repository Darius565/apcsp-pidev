#include <stdio.h>
#include <math.h>

int main()
{

  float radius;
  float PI = 3.14159265;

  for (int i = 3.5; i <= 12.5; i++)
  {
	radius = i;
	float area = PI *radius*radius;
	printf("The area of the circle is %f\n", area);
	
  }




}
