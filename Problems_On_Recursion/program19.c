//write a Recursive program which accept number from user and return the Smallest digit?
//Input : 523
// output : 2


#include<stdio.h>

int MinimumR(int No)
{
    static int Min = 9;
    int iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        if(iDigit < Min)
        {
            Min = iDigit;
        }
        No = No / 10;
        MinimumR(No);
    }
    return Min;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    ret = MinimumR(value);
    printf("Minimum number is : %d\n",ret);

    return 0;
}