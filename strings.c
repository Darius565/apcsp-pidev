 
#include <stdio.h>
#include <string.h>

int main()
{
	char string1[] = "abcdefghijklmnopqrstuvwxyz";
	char string2[27];
	char string3[100];
  for(int i = 0; i < 26; i++)
	{
	string2[i] = 'a' + i;
	}
  string2[26] = '\0';
  if (strcmp(string1, string2) == 0)
	printf("The first and second strings are the same\n");
  else
	printf("The first and second strings are not the same\n");
  for(int i = 0; i < 26; i++)
	{
	string2[i] = 'A' + i;
	}
  if (strcmp(string1, string2) == 0)
	printf("The first and second new strings are the same\n");
  else
	printf("The first and second new strings are not the same\n");
  strcpy(string3, string1);
  strcat(string3, string2);
  printf("First string: %s\nSecond string: %s\nThird string: %s\n", string1, string2, string3);
}
