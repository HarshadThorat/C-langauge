//Write a program which accept area in square feet and convert it into square meter. 
// (1 square feet = 0.0929 Square meter)
// Input: 5
// Output: 0.464515


#include<stdio.h>

double SquareMeter(int iNo)
{
    double iAns = 0.0;

    iAns = iNo * 0.0929;
    return iAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Value in Square Meter is : %f",dRet);
    return 0;
}

