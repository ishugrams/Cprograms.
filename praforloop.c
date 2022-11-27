#include<stdio.h>

int main()
{
  int Arr[4] = {11,1,51,101};
  int iCnt = 0;

  printf("elemnt of arrray are: \n");

  for(iCnt = 0; iCnt <= 3; iCnt++)
  {
    printf("%d\n",Arr[iCnt]);
  }

  return 0;
}