// Write a program which accept number from user and return the count of even digits.
// input : 2395       1018        8462        
// output : 1          2          4  


#include<stdio.h>

int CountEven(int iNo)
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
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("Count of Even number is : %d",iRet);

    return 0;
}