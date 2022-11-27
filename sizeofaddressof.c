#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.14;
    double d = 9.567;


    printf("value from the variable are :\n");
    printf("%c:\n",ch);
    printf("%d:\n",i);
    printf("%f:\n",f);
    printf("%lf:\n",d);

    printf("size of the variable are :\n");
    printf("value from the variable are :%d\n",sizeof(ch));
    printf("value from the variable are :%d\n",sizeof(i));
    printf("value from the variable are :%d\n",sizeof(f));
    printf("value from the variable are :%d\n",sizeof(d));


    printf("address of  the variable are :\n");
    printf("address of the variable are :%d\n",&ch);
    printf("address of the variable are :%d\n",&i);
    printf("address of the variable are :%d\n",&f);
    printf("address of the variable are :%d\n",&d);

    return o;
}