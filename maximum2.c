#include<stdio.h>
int Maximum(int iNo1, int iNo2)
{
  if (iNo1 > iNo2)
  {
    return iNo1;
  }
  else
  {
    return iNo2;
  }
  
}
int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  int iRet = 0;

  printf("enter first intege\n");
  scanf("%d",&iValue1);

  printf("enter the second interger\n");
  scanf("%d",&iValue2);

  iRet = Maximum(iValue1,iValue2);
  if (iValue1 > iValue2)
  {
    printf("first integer is gereter\n");
  }
  else
  {
    printf("second integer is gereter\n");
  }

  printf("maximum number is:%d",iRet);

  return 0;
}