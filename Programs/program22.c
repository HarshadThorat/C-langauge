// Write a program which accept Three number from user and print its Multiplication.
// input = 5   4   7
// output = 140


#include<stdio.h>


int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;
    
    if(iNo1 == 0)
    {
        iAns = iNo2 * iNo3;
        return iAns;
    } 
    if(iNo2 == 0)
    {
        iAns = iNo1 * iNo3;
        return iAns;
    }
    if(iNo3 == 0)
    {
        iAns = iNo2 * iNo3;
        return iAns;
    }
         
    else
    {
        iAns = iNo1 * iNo2 * iNo3;
    }

    return iAns; 

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter the first  number\n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);
    
    printf("Enter the third number\n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d",iRet);

    return 0;
}