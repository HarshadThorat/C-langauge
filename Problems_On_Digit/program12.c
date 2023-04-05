
//write a java program which accept number from user and return the count of Odd digit
//Input :  2395     1018     8462
//Output :  3        2        0


#include<stdio.h>

int OddDigit(int No)
{
    int iCnt = 0;
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit % 2 != 0)
        {
            iCnt++;
        }
        No = No / 10;
    }
    return iCnt;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the Digit\n");
    scanf("%d",&value);

    ret = OddDigit(value);
    printf("Count of Odd Digits are : %d\n",ret);

    return 0;
}