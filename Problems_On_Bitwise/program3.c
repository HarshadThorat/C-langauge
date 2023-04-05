// write a program wich checks whether 7th,15th,21th,28th bit is ON or OFF?

//0000 1000 0001 0000 0100 0000 0100 0000
// 0     8    1    0    4    0   4     0
//0X08104040

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT Mask = 0X08104040;
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
        printf("7th,15th,21th,28th bit is ON\n");
    }
    else
    {
        printf("7th,15th,21th,28th bit is OFF\n");
    }  

    return 0;
}