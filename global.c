#include <stdio.h>

int X = 11;  //global variable 

int main()
{
  int A = 20;

  printf("the value of A in main :%d\n",A);
  
  printf("the value of X in main :%d\n",X);
  
  Demo();

  return 0;
 
}
 
void Demo()
{ 
  int B = 10;
  
  
  printf("the value of B in Demo :%d\n",B);

  
  printf("the value of X in Demo :%d\n",X);

}

