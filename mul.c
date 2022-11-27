#include <stdio.h>

int mul(int ivalue1, int ivalue2)

{
  int iOutput = 0;

  iOutput = ivalue1 * ivalue2;

  return iOutput;
  
}

int main()
{
  int ino1 = 10;
  
  int ino2 = 11;

  int iAns = 0;

  iAns = mul(ino1,ino2);

  printf("mul is :%d",iAns);

  return 0;

  
}