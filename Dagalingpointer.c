#include<stdio.h>
#include<stdlib.h>


int main()
{
   int *p  = NULL;
   int *q = NULL;

   p = (int *)malloc(sizeof(int)*10);

   q = p;

   free(p);
                          //pinter is poinrting to such a location which is not exxicting;
    return 0;
}