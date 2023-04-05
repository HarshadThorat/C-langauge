// write a program which accept number and position from user and Toggle that bit. return modified number.
//input : 10  3
//output : 14

//0000 0000 0000 0000 0000 0000 0000 0001
// 0     0    0    0    0    0   0     1
//0X00000001

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT Result = 0;

    Mask = Mask << (Pos-1);

    Result = No ^ Mask;

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

    iret = ToggleBit(value, pos);

    printf("Updated number is : %d\n",iret);
    
    return 0;
}