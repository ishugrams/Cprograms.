#include<stdio.h>


void fun()
{
  printf("inside the func\n");
}

int main()
{
  fun();

  void (*fptr)();

  fptr = fun;

  fptr();

  return 0;
}