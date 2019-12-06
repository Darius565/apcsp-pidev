#include <stdio.h>
#include <string.h>
#include "student.h"

int main()
{
	char input[50];
	int howmanystudents;
	printf("How many students do you want?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &howmanystudents);
	struct Student studentA[howmanystudents];
	for (int i = 0; i < howmanystudents; i++)
	{
		printf("What is your first name?\n");
		fgets(input, 256,stdin);
		sscanf(input, "%s", &studentA[i].firstName);
		printf("What is your last name?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%s", &studentA[i].lastName);
		printf("What is your age?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d", &studentA[i].age);
		printf("What is your student ID number\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d", &studentA[i].studentid);
	}
	for (int i = 0; i < howmanystudents; i++)
	{
		printStudent(&studentA[i]);
	}
}

