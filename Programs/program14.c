// write a program which accept number from user and display its multiplication of factor??
// input = 12
// output =  1 * 2 * 3 * 4 * 6


#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
            iMult = iMult * iCnt;
        }    
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("MultFactors are : %d",iRet);


    return 0;
}