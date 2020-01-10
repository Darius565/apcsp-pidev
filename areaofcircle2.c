#include <stdio.h>

float areaOfCircle(float radius) 
{
  float area = (3.14159265 * radius * radius);
  return area;
}
int main(int argc, char* argv[])
{
 if (argc != 3)
  {
	printf("%s : Please enter two floats\n", argv[0]);
	return 1;
  }
  float lower;
  int found = sscanf(argv[1], "%f", &lower);
  if (found != 1)
    {
	printf("First number is not a float, enter two floats\n");
	return 1;
    }
  float upper;
  found = sscanf(argv[2], "%f", &upper);
  if (found != 1)
    {
	printf("Second number is not a float, enter two floats\n");
	return 1;
    }
  for (float radius = lower; radius <= upper; radius++)
    {
	float result = areaOfCircle(radius);
	printf("A circle with a radius of %f, has an area of %f\n", radius, result);
    }
}
