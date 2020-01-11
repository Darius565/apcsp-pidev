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
		printf("What is student's first name?\n");
		fgets(input, 256,stdin);
		sscanf(input, "%s", &studentA[i].firstName);
		printf("What is student's last name?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%s", &studentA[i].lastName);
		printf("What is student's age?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d", &studentA[i].age);
		printf("What is student's ID number\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d", &studentA[i].studentid);
	}
	for (int i = 0; i < howmanystudents; i++)
	{
		printStudent(&studentA[i]);
	}
}

