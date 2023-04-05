// write a program which accept number from user and ON its first 4 bit .return modified number
//input : 73
//output : 79

//0000 0000 0000 0000 0000 0000 0000 1111
// 0     0    0    0    0    0   0     f
//0X0000000f

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT Mask = 0X0000000f;
    UINT Result = 0;

    Result = No | Mask;

    return Result;
}

int main()
{
    UINT value = 0;
    UINT iret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    iret = ToggleBit(value);

    printf("Updated number is : %d\n",iret);
    
    return 0;
}