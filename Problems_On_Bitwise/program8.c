// write a program which accept number from user and Toggle 7th bit of that number if it is on,return modified number
//input : 137
//output : 201

//0000 0000 0000 0000 0000 0000 0100 0000
// 0     0    0    0    0    0   4     0
//0X00000040

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT Mask = 0X00000040;
    UINT Result = 0;

    Result = No ^ Mask;

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