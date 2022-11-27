#include<stdio.h>


void Demo()
{ 
   auto int A = 10; //explicitly
   A++; //increament
   printf("Value for Demo is : %d\n",A);

}
void Hello()
{ 
   static int B = 10; //explicitly
   B++; //increament
   printf("Value for Hello is : %d\n",B);

}



int main()
{
  Demo();
  
  Demo();
  
  Hello();
  Hello();
  
  return 0;
}