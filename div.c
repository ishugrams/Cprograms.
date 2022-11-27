#include <stdio.h>

int div(int ivalue1, int ivalue2)
{ 
  int iOutput=0;
  
  iOutput = ivalue1/ivalue2;
  
  return iOutput;
}

int main()
{  
  int ino1 = 10;
  
  int ino2 = 100;
  
  int iAns = 0;
  
  iAns = div(ino1,ino2);

  printf("div is :%d",iAns);

  return 0;
}