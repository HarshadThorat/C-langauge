// write a program which accept number from user and return difference between summation of all its Non-factor and factors??
// input = 12        10 
// output = -34     -29


#include<stdio.h>
int Factdiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iAns = 0;

    printf("Factors are\n");
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
            iSum1 = iSum1 + iCnt;
        }    
    }

    printf("Non-Factors are\n");
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
            iSum2 = iSum2 + iCnt;
        }    
    }

    iAns = iSum1 - iSum2;
    return iAns;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Factdiff(iValue);
    printf("Summation of allfactors and non-factors are : %d",iRet);

    return 0;
}