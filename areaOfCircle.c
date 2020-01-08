#include <stdio.h>
#include <math.h>

float areaOfCircle(float radius)
  {
	float pi = 3.14159265;
        return pi * radius * radius;
  }
int main()
{
float r;
	for (float i = 3.5; i <= 12.5; i++)
  {
	r = areaOfCircle(i);
	printf("The area of the circle with a radius of %f is %f\n", i, r); 
  }
}

