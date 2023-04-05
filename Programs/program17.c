// write a program which accept number from user and return summation of all its Non-factor??
// input = 12        10 
// output = 50       37 


#include<stdio.h>
int NonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
            iSum = iSum + iCnt; 
        }    
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = NonFact(iValue);
    printf("Summation of Non factors are : %d",iRet);

    return 0;
}