// Write a program which accept number from user and count frequency of 4 int it.
// input : 2395        1018            9440               922432
// output : 0          0               2                  1


#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Digit\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("Count of Four is : %d",iRet);

    return 0;
}