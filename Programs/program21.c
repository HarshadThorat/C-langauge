// Write a program which accept two number from user and check whether number is equal or not .
// input = 10  10         10  12
// output = equal        not equal 


#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int bRet = false;

    printf("Enter the first  number\n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}