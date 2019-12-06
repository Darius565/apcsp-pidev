#include <stdio.h>
#include "student.h"

void printStudent(struct Student* student)
{
	printf("The student's name is %s %s\nThe student's age is %d\nThe student's ID number is %d\n", student->firstName, student->lastName, student->age, student->studentid);
}
