// write a program ehich return diff between even factorial and odd factorial of given number.
// input : 5
// output : -7    (8 - 15)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenfact = 1;
    int iOddfact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenfact = iEvenfact * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iOddfact = iOddfact * iCnt;
        }
    }

    return iEvenfact - iOddfact;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("factorial Difference is : %d",iRet);

    return 0;
}