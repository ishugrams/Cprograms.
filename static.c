#include<stdio.h> 
//application program to demonstate concept of static storage class

/*
Storage class:     static 
scope:             Local to the block, in which the variable is defined
Lifetime:          Value of the variable perisits between diffrent function call.
Linkage:           Internal linkage
Default value :    Zero
Memory Alllocation: bss/non bss
*/
/*
There are two types of static variables as 
1.Local satatic : static variables inside a method or function retains its value betweeen invocation.
2.Global Static : static variables declared globally can called by any function or method,
                  so long as those function appear in the same file as the satic variable.
*/
static int Global_satic = 10;

void Fun_Normal()
{
  //This is local satic variable
  //whose value perisist throughtout the function call
  //Initialisation of static variable only once
  
  static int i = 10;
 
  //Incrementing value of i
  ++i;

 printf("\nValue of i from Fun_Normal is%d",i);
 printf("\nAddress of static variables  is%u",&i);
}

//Recursive function which uses auto variable
//This fuction runs infinitely due to the auto variables

void Gun_Recursive_Auto()
{
  auto int i = 5;

  i--;
  
  if(i != 0)
  {
     printf("\nIn Gun_Recursive_Auto value of is %d,i");
     Gun_Recursive_Auto();
  }
}
int main()
{
  //Calling function multiple time
  Fun_Normal();
  Fun_Normal();
  Fun_Normal(); 
  
  Gun_Recursive_static();

  //Gun_Recursive_Auto();
 
  return 0;
}