// Write a program which accept range from user and display all Even number in between that range.
// 23    35
// 24 26  28  30  32  34 


#include<stdio.h>

void  DisplayEvenRange(int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0;iStart <= iEnd; iStart++)
    {
        if(iStart % 2 == 0)   
        {
            printf("%d\t",iStart);
        }
    }

    if(iStart < iEnd);
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

    DisplayEvenRange(iValue1,iValue2);

    return 0;
}