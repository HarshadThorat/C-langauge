//write a program which accept number from user and return the Multiplication of digit ?
//Input :  2395     1018     9440     
//Output :  270       8       144    


#include<stdio.h>

int MultDigit(int No)
{
    int iMult = 1;
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        No = No / 10;
    }
    return iMult;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the Digit\n");
    scanf("%d",&value);

    ret = MultDigit(value);
    printf("Multiplication of all the digits are : %d\n",ret);

    return 0;
}