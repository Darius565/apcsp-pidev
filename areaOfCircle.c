#include <stdio.h>
#include <math.h>

int areaOfCircle(float radius)
  {
	float pi = 3.14159265;
        float area = pi*radius*radius;
        printf("The area of the circle is %f\n", area);
  }
int main()
{
	for (int i = 3.5; i <= 12.5; i++)
  {
        areaOfCircle(i);
  }
}

