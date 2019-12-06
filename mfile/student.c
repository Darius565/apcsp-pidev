#include "student.h"

void printStudent(struct Student* student)
{
	printf("The student's full name is %s %s\n", student->firstname, student->lastname);
	printf("The student's age is %d\n", student->age);
	printf("The student's ID number is %d\n", student->studentid);
}
