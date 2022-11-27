#include<stdio.h>

int main()
{
  int no1 = 10;
  const int no2 = 10; //read - only 

  printf("%d\n",no1);
  printf("%d\n",no2);

  no1++;  //no1 = no1 + 1;  //A
  no2++;  //no2 = no2 + 1;  //NA
  
  no1 = 20;  //A
  no2 = 20;  //NA

  no1--;    //A
  no2--;    //NA

  return 0;
}