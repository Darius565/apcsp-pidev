#include <stdio.h>
#include <string.h>



struct Student 
        {
        char firstname[50];
        char lastname[50];
        char age[10];
        int studentid[50];
        }

printStudent(struct Student* student)
{
	printf("The student's first name is %s\n", student->firstname);
	printf("The student's first name is %s\n", student->lastname);
	printf("The student's age is %s\n", student->age);
	printf("The student's first name is %s\n", student->studentid);

}

int main()
{
  struct Student arr[2];

  for (int i = 0; i < 2; i++)
  {
    printf("Enter Your First Name:\n");
    scanf("%s", arr[i].firstname);
    printf("Enter Your Last Name:\n");
    scanf("%s", arr[i].lastname);
    printf("Enter Your Age:\n");
    scanf("%s", arr[i].age);
    printf("Enter Your Student ID number:\n");
    scanf("%s", arr[i].studentid);
  }
  for (int i = 0; i < 2; i++)
  {
    printStudent(&arr[i]);
  }
  return 0; 
}
