// write a program which accept number and position from user and Toggle Contents of first and last nibble of the number .return modified number.


//0000 0000 0000 0000 0000 0000 0000 1001
// 0     0    0    0    0    0   0     9
//0X00000009

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT Mask = 0X00000009;
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