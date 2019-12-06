#include <stdio.h>
#include "student.h"

void printStudent(struct Student* student)
{
	printf("The student's full name is %s %s\n", student->firstName, student->lastName);
	printf("The student's age is %d\n", student->age);
	printf("The student's ID number is %d\n", student->studentid);
}
