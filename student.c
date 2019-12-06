#include <stdio.h>
#include <string.h>

struct Student {
	char firstname[50];
	char lastname[50];
	int age;
	int studentid;
};
void printStudent(struct Student* student)
{
  printf("The student's name is %s %s\n", student->firstname, student->lastname);
	printf("The student's age is %d\n", student->age);
	printf("The student's ID number is %d\n", student->studentid);
}

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
		sscanf(input, "%s", studentA[i].firstName);
		printf("What is student's name?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%s", studentA[i].lastName);
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
