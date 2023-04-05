//write a java program which accept number from user and return the Difference between Summation of Even and Odd digit ?
//Input :  2395            1018         8440     
//Output :  -15(2-17)      6(8-2)       16(16-0)    


#include<stdio.h>

int Difference(int No)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        No = No / 10;
    }
    return (iEvenSum - iOddSum);
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the Digit\n");
    scanf("%d",&value);

    ret = Difference(value);
    printf("Difference of Additon of Even and Odd digits are : %d\n",ret);

    return 0;
}