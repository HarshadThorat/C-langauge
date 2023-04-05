// write a program wich checks whether first and last bit is ON or OFF?  first = 1 last = 32

//1000 0000 0000 0000 0000 0000 0000 0001
// 8     0    0    0    0    0   0    1
//0X80000001

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT Mask = 0X80000001;
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
        printf("1st And 32nd bit is ON\n");
    }
    else
    {
        printf("1st And 32nd bit is OFF\n");
    }  

    return 0;
}