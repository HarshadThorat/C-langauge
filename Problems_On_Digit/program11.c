//write a program which accept number from user and return the count of Even digit
//Input :  2395     1018     8462
//Output :   1        2        4


#include<stdio.h>

int EvenDigit(int No)
{
    int iCnt = 0;
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit % 2 == 0)
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

    ret = EvenDigit(value);
    printf("Count of Even Digits are : %d\n",ret);

    return 0;
}