//write a Recursive program which accept number from user and return the Smallest digit?
//Input : 523
// output : 2


#include<stdio.h>

int ReverseR(int No)
{
    static int Rev = 0;
    int iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        Rev = (Rev * 10) + iDigit;
        No = No / 10;
        ReverseR(No);
    }
    return Rev;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    ret = ReverseR(value);
    printf("Reverse digit is : %d\n",ret);

    return 0;
}