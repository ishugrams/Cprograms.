#include<stdio.h>

struct Student 
{
  int marks;
  int Age;
  char Division;

};

int main()
{
  struct Student obj;
  struct Student *ptr = NULL;
//struct sudent *ptr = &obj;
  ptr = &obj;
 //indirect acessing oprator  arrow
  ptr->marks = 90;
  ptr->Age = 21;
  ptr->Division = 'a';

  return 0;
}