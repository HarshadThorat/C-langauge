// Write a program which accept number from user and check whether it contain 0 in it or not.
// input : 2395                       1018
// output : There is no zero         There is zero


#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 1)
        {
            return true;
        }
        iNo = iNo / 10;
       
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Digit\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == true)
    {
        printf("It contain Zero\n");
    }
    else
    {
        printf("There is No Zero\n");
    }

    return 0;
}