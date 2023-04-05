// write a program which accept number from user and OFF 7th and 10th bit of that number if it is on,return modified number
//input : 577
//output : 1

//1111 1111  1111 1111 1111 1101 1011 1111 
// f     f     f    f    f    D   B    f
//0XfffffDBf

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT OFFBit(UINT No)
{
    UINT Mask = 0XfffffDBf;
    UINT Result = 0;

    Result = No & Mask;

    return Result;
}

int main()
{
    UINT value = 0;
    UINT iret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    iret = OFFBit(value);

    printf("Updated number is : %d\n",iret);
    
    return 0;
}