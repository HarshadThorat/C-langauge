// Write a program which accept range from user and  return addition of all  number in between that range.
// 23    30
// 212


#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;


    for(iCnt = 0;iStart <= iEnd; iStart++)
    {
        iSum = iSum + iStart;
    }
    return iSum;
    
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

    iRet = RangeSum(iValue1,iValue2);
    printf("Addition of range is : %d",iRet);
    return 0;
}