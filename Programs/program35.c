//Accept amount in US dollar and return its corresponding value in Indian currency. 
// Consider 1$ as 70 rupees.
// Input :10                3
// Output : 700             210 

#include<stdio.h>

int DollerToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;
    return iAns;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d",iRet); 



    return 0;
}