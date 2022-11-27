#include<stdio.h>

int A = 10;   //global variable   ---  exten , satic


void fun()
{

  auto int B = 20;    //local variable ---- auto, register, static   //satck section
  register int D = 20;   // cpu register
  static int E = 20;     //data section(static segment)


  B++;
  D++;
  E++;

  printf("value for auto variable: %d\n",B);
  printf("value for register variable: %d\n",D);
  printf("value for static variable: %d\n",E);

}


int main()
{                              
  int C = 30;
  printf("first function call\n");
  
  fun();

  printf("second function call\n");

  fun();

  printf("third function call\n");

  fun();
  

  return 0;
}