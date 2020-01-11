#include <stdio.h>
#include "student.h"

int main()
{
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
	printf("The student's fullname is %s %s\n", student->firstname, student->lastname);
	printf("The student's age is %d\n", student->age);
	printf("The student's ID number is %d\n", student->studentid);
}
int main()
{
	char input[50];
	int answer;
	printf("How many students?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &answer);
	struct Student studentA[answer];
	for (int i = 0; i<answer; i++)
	{
	printf("What is your first name?\n");
	fgets(input, 256,stdin);
	sscanf(input, "%s", &studentA[i].firstname);
	printf("What is your last name?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", &studentA[i].lastname);
	printf("What is your age?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentA[i].age);
	printf("What is your student ID number\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentA[i].studentid);
	}
	for (int i = 0; i<answer; i++)
	{
	printStudent(&studentA[i]);
	}
}
}
