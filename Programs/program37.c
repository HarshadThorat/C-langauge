// write a program to find odd factorial of given number
// input : 5
// output : 15    (5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);
    printf("Odd factorial of the number is : %d",iRet);

    return 0;
}