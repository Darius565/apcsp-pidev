#include <stdio.h>
// This is the function that adds 1 to the index
int arrayAdd(int* arr, int s, int n)
{
	for (int i = 0; i < s; i++)
	{
		arr[i] = arr[i] + n; 
		printf("%d\n", arr[i]);
	}
}

int main()
{
	// Initializes the array
	int arr[100];
	// For loop that multiplies the indexes
	for (int i = 0; i < 100; i++)
	{
		arr[i] = i * i;
	}
	arrayAdd(arr, 100, 1);
}

