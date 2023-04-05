// write a program which accept one number, two position from user and check whether bit at first or bit at second positon is ON or OFF?

//0000 0000 0000 0000 0000 0000 0000 0000
// 0     0    0    0    0    0    0     0
//0X00000000

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1, UINT Pos2)
{
    UINT Mask1 = 0X00000001;
    UINT Mask2 = 0X00000001;
    UINT Result = 0;
    UINT Mask = 0;

    Mask1 = Mask1 << (Pos1-1);
    Mask2 = Mask2 << (Pos2-1);
    Mask = Mask1 | Mask2;
    
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
    UINT pos1 = 0;
    UINT pos2 = 0;
    
    printf("Enter the number\n");
    scanf("%d",&value);

    printf("Enter the fist Position\n");
    scanf("%d",&pos1);
    
    printf("Enter the second Position\n");
    scanf("%d",&pos2);
    
    bret = CheckBit(value, pos1, pos2);
    if(bret == true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }  

    return 0;
}