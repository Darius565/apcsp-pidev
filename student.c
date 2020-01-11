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
	int answer;
	printf("How many students are you entering?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &answer);
	struct Student studentA[answer];
	for (int i = 0; i<answer; i++)
	{
	printf("What is student's first name?\n");
	fgets(input, 256,stdin);
	sscanf(input, "%s", &studentA[i].firstname);
	printf("What is student's last name?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", &studentA[i].lastname);
	printf("What is student's age?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentA[i].age);
	printf("What is student's ID number\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentA[i].studentid);
	}
	for (int i = 0; i<answer; i++)
	{
	printStudent(&studentA[i]);
	}
}
