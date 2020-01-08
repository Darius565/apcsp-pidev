#include <stdio.h>
#include <math.h>

float areaOfCircle()
{
	for (int i = 3.5; i <= 12.5; i++)
  {
	float pi = 3.14159265;
        float radius = i;
        float area = pi*radius*radius;
        printf("The area of the circle is %f\n", area);
  }
}

int main()
{
  float radius;
  areaOfCircle();
}
