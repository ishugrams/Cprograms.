#include <stdio.h>

int main()
{  
  int Itoken = 0;
  printf("enter jay ganesh\n");
  scanf("%d",&Itoken);

  switch(Itoken)
  {
    case 1:
    printf("jay ganeshya namh:\n");
    break;
    case 2:
    printf("jay lambodaray namh\n");
    break;
    case 3:
    printf("ekdantay namh\n");
    break;
    case 4:
    printf("jay gajananay namh\n");
    break;
    default:
    printf("ganapati baapa moraya\n");
    break;
  }
  return 0;
}