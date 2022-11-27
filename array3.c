#include<stdio.h>

int main()
{
    int Arr[4]  = {10,20};

    printf("%d\n",Arr[0]);  //10
    printf("%d\n",Arr[1]);  //20
    printf("%d\n",Arr[2]);  //?
    printf("%d\n",Arr[3]);  //?

    int Brr[4];
    Brr[0] = 10;
    Brr[1] = 20;

    printf("%d\n",Brr[0]);  //10
    printf("%d\n",Brr[1]);  //20
    printf("%d\n",Brr[2]);  //?
    printf("%d\n",Brr[3]);  //?

    return 0;
}


//toolchain , 