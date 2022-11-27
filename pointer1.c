#include<stdio.h>




int main()
{
   int no = 11;  //no is a variable of type integer

   int *p = &no;  //p has size 8 byte //p is a pointer which holds address of integer which get intilased with the address of no







    char ch = 'A';

    char *q = &ch;   


   printf("%d\n",no); //11
   printf("%d\n",p);  //100
   printf("%d\n",&no); //100
   printf("%d\n",&p); //200
   printf("%d\n",sizeof(no)); //4
   printf("%d\n",sizeof(p));  //8  //ram vacha pratek address ha long interger cha asto pionter ha address hold karto

   printf("%d\n",sizeof(*p));
    return 0;
}

double d = 9.789;

double *q = &d;


