// write a program wich checks whether 15th bit is ON or OFF?

//0000 0000 0000 0000 0100 0000 0000 0000
// 0     0    0    0    4    0   0     0
//0X00004000

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT Mask = 0X00004000;
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
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }  

    return 0;
}