#include<stdio.h>


//strurece declaration

//there is no memory allpcation at this point
//builder kade jaun flat cha nakSasha
struct Demo
{
    int i;
    float f;
    int j;
    double d;
};

int main()

{                                   
    //struct object /variable creation
    //memory grt alllocated at this point   
    struct Demo obj1;  
    struct Demo obj2;
    struct Demo obj3;
//mem ber initialsation 
    obj1.d = 11.0;
    obj2.i = 21;  //. is direct accessing oprater
    obj3.j = 51;

    printf("size of obj1 is :%d\n",sizeof(obj1)); //20
    printf("size of obj1 is :%d\n",sizeof(obj2));   //20
    printf("i of obj2 is :%d\n",obj2.i);  //21


    return 0;
}


