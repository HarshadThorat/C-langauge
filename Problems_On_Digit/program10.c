// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// input : 2395                 1018              8440        
// output : -15 (2 - 17)         6   (8-2)        16  (16-0)    


#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    printf(" Even Sum %d\n",iSumEven);
    printf(" Odd Sum %d\n",iSumOdd);
    
    return (iSumEven - iSumOdd);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Digit\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference of Even and Odd is : %d",iRet);

    return 0;
}