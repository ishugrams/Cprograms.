#include<stdio.h>

int main()
{
  int mark1 = 78;
  int mark2 = 89;
  int mark3 = 90;
  int mark4 = 96;

  //member initilasation list
  int mark[4] = {78,89,90,96};  //mark is one daimensional array which contain 4 element each element is of type integer;

  mark[0]; //78
  mark[1]; //89
  mark[2]; //90
  mark[3]; //96

  int Demo[4];
  
  //member by member initilasation list

  Demo[0] = 11;
  Demo[0] = 21;
  Demo[0] = 51;   //can't increase the size of array once you initized
  Demo[0] = 10;


  return 0;
}