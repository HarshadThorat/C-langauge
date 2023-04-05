// Write a program which accept range from user and display all number in between that range in reverse order.
// 23    35
// 35 34 33 32 31 30 29 28 27 26 25 24 23


#include<stdio.h>

void  DisplayRange(int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd;iEnd >= iStart; iEnd--)
    {
        printf("%d\t",iEnd);
    }

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);
    
    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    DisplayRange(iValue1,iValue2);

    return 0;
}