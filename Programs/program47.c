// Write a program which accept range from user and return addition of all even number in between that range.
// 23    35
// 174


#include<stdio.h>

int AdditionEvenRange(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0;iStart <= iEnd; iStart++)
    {
        if(iStart % 2 == 0)   
        {
            iSum = iSum + iStart;
        } 
        return iSum;            
    }
    
       
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);
    
    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    iRet = AdditionEvenRange(iValue1,iValue2);
    printf("Addition of Even number from the range is : %d",iRet);

    return 0;
}