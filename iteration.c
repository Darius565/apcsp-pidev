#include<stdio.h>

int main()
{
	int div = 4;
	


  // for loop that controls the count of results
  for (int i = 1; i <= 100; i++)
  {
	if (i%div == 0)
	{
		printf("%d\n", i);
	}

  }
}

