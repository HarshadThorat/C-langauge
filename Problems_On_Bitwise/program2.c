// write a program wich checks whether 5th and 18th bit is ON or OFF?

//0000 0000 0000 0010 0000 0000 0001 0000
// 0     0    0    2    0    0   1     0
//0X00020010

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT Mask = 0X00020010;
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
        printf("5th & 18th bit is ON\n");
    }
    else
    {
        printf("5th & 18th bit is OFF\n");
    }  

    return 0;
}