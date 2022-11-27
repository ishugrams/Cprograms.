#include<stdio.h>
// no1 is interger which define external to the file 
extern int No1;
extern int No2;
//function declaration
//Demo is a fuction which accpet nothing and 
//which return nothing is external to the file
extern void Demo();

int main()
{
  Demo();
  
  printf("value f no1 : %d\n",No1);
  printf("value f no2 : %d\n",No2);
  
  return 0;
}