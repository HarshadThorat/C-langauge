// Write a program which accept total marks & obtain marks from user and calculate percentage.
// input = 1000    745 
// output = 74.5

#include<stdio.h>

float precentage(float iTotal, float iObtain)
{
    float iAns = 0.0;

    

    iAns = ((iObtain / iTotal) * 100);
    return iAns;

}
int main()
{
    int iValue1 = 0.0;
    int iValue2 = 0.0;
    float fRet = 0.0;

    printf("Enter the total marks\n");
    scanf("%d",&iValue1);

    printf("Enter the obtain marks\n");
    scanf("%d",&iValue2);

    fRet = precentage(iValue1, iValue2);
    printf("precentage is : %f",fRet);
    
    return 0;
}