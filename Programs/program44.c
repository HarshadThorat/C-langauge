// Write a program which accept range from user and display all number in between that range.
// 23    35
// 23 24 25 26 27 28 29 30 31 32 33 34 35


#include<stdio.h>

void  DisplayRange(int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0;iStart <= iEnd; iStart++)
    {
        printf("%d\t",iStart);
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