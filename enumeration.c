#include<stdio.h>


enum days {Monday = 2, Tuesday, thusday, firday};

int main()
{
  enum days obj;


  printf("size of enum %d\n",sizeof(obj));
  printf("monday %d\n",Monday);
  printf("tuesday%d\n",Tuesday);
  printf("thusday %d\n",thusday);
  printf("firday %d\n",firday);
  

 // Monday++;
 // printf("%d\n",Monday)
  return 0;
}