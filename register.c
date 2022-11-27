#include<stdio.h>

//application program to demonstrate concept of register storage class

/*
Storage class     :     register
Scope             :     local(Inside the block)
Lifetime          :     local
Linkage           :     no Linkage 
Default Value     :     Garbage
Memory allocation :     CPU register
*/

/*
The register storage class specifier indicates to the complier that the object should be stored in a
machine register.
The register storage class specifier is typically specified for heavily used variables, such as a loop 
control variable
in the hopes of enhancing performance by minimizing access time.
If the complier does not allocate a machine register for register object, the object is treated as
having the storage class specifier auto.
*/

//Register storage class is a request.
//If the register are available then our request is accepted.

//We can not declare register storage class vairiable in global scope 
//register int c;

void fun()
{
  register int i;
  //It is allow to create pointer to register variable in c
  //int*p=&i;  //It is allowed in c++

  //Any variable that stored in CPU register or not depend on the capacity of microprocessor.
  // If microprocessor is 16 bit register then they cannot hold the a float value or double value.
  //which requrie 4 and 8 bytes respectively.
  //if we use the register storage class for float, double variable then we won't get any error
  //because complier treat it as default storage class i.e auto
   
   register double d = 3.12;
}
  
void gun()
{
 //This is the better use of register storage class
 
 register int i;
 for(i=10; i>=0; --i)
{
  printf("%d",i);
}
}
int main()
{
   fun();

   gun();

return 0;

}
