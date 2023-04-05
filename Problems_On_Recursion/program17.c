//write a Recursive program which accept number from user and return the Largest digit?
//Input : 523
// output : 5


#include<stdio.h>

int MaximumR(int No)
{
    static int Max = 0;
    int iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        if(iDigit > Max)
        {
            Max = iDigit;
        }
        No = No / 10;
        MaximumR(No);
    }
    return Max;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    ret = MaximumR(value);
    printf("Maximum number is : %d\n",ret);

    return 0;
}