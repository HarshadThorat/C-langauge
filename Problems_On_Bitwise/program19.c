//write a program ehich accept one number from user and range of position from user Toggle all bits from that range. 
//Input = 897   9  13


//0000 0000 0000 0000 0000 0000 0000 0001 
// 0    0     0    0    0    0    0    1
//00000001
//0X00000001


#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT start, UINT End)
{
    UINT Mask1 = 0XFFFFFFFF, Mask2 = 0XFFFFFFFF, Mask = 0, Result = 0;

    Mask1 = Mask1 << (start - 1);
    Mask2 = Mask2 >> (32 - End);
    Mask = Mask1 & Mask2;

    Result = No ^ Mask;

    return Result;
}


int main()
{
    UINT value = 0;
    int iret = 0;
    UINT Start = 0;
    UINT End = 0;

    printf("Enter the number\n");
    scanf("%d",&value);
    
    printf("Enter the Starting Position\n");
    scanf("%d",&Start);
    
    printf("Enter the Ending Position\n");
    scanf("%d",&End);
    
    iret = ToggleRange(value,Start,End);
    
    printf("Updated number is : %d\n",iret);
    
    return 0;
} 