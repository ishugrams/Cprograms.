#include<stdio.h>

//This is the default storage class for all local variables

/*
Storage class:     auto 
Scope        :     local(Inside the block)
Lifetime     :     local
Linkage      :     no Linkage 
Default Value:     Garbage
*/

void fun()
{
  auto int i;
  auto int j =10;
  
  //auto keyword is optional
  int k =30;  //This is auto variable

  printf("Scope of auto variables starts from here in fuction fun\n");

  printf("Default value of uninitialised auto variable is %d\n",i);

  printf("Scope of auto variables  ends here in fuction fun\n");
}

int main()
{
   //This is not allowed to access auto variable outside its scope 
   //printf("%d,i");
   
   fun(10);

   return 0;
}