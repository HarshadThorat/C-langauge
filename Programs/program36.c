// write a program to find even factorial of given number
// input : 5
// output : 8    (4 * 2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            ifact = ifact * iCnt;
        }
    }
    return ifact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial of the number is : %d",iRet);

    return 0;
}