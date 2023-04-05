// write a program which accept number and position from user and OFF that bit. return modified number.
//input : 10  2
//output : 8

//0000 0000 0000 0000 0000 0000 0000 0001
// 0     0    0    0    0    0   0     1
//0X00000001

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT OFFBit(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT Result = 0;

    Mask = Mask << (Pos-1);

    Result = No ^ Mask;

    return Result;
}

int main()
{
    UINT value = 0;
    UINT iret = 0;
    UINT pos = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    printf("Enter the Position\n");
    scanf("%d",&pos);

    iret = OFFBit(value, pos);

    printf("Updated number is : %d\n",iret);
    
    return 0;
}