// write a program which accept number and position from user and check whether bit at that position is ON or OFF.
//input : 73
//output : 79

//0000 0000 0000 0000 0000 0000 0000 0001
// 0     0    0    0    0    0   0     1
//0X00000001

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT Result = 0;

    Mask = Mask << (Pos-1);

    Result = No & Mask;

    if(Result == Mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT value = 0;
    bool bret = false;
    UINT pos = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    printf("Enter the Position\n");
    scanf("%d",&pos);

    bret = CheckBit(value, pos);

    if(bret == true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n");
    }
    
    return 0;
}