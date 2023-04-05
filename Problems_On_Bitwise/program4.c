// write a program wich checks whether 7th,8th & 9th bit is ON or OFF?

//0000 0000 0000 0000 0000 0001 1100 0000
// 0     0    0    0    0    1   C    0
//0X000001C0

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT Mask = 0X000001C0;
    UINT Result = 0;

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

    printf("Enter the number\n");
    scanf("%d",&value);

    bret = CheckBit(value);
    if(bret == true)
    {
        printf("7th,8th & 9th bit is ON\n");
    }
    else
    {
        printf("7th,8th & 9th bit is OFF\n");
    }  

    return 0;
}