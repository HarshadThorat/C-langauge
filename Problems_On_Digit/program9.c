// Write a program which accept number from user and return the Multiplication of all digits.
// input : 2395       1018        9440        
// output : 270         8         144    


#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Digit\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of the Digits are : %d",iRet);

    return 0;
}