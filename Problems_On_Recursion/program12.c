//write a Recursive program which accept number from user and return the summation of its digit?
//Input : 879
// output : 24


#include<stdio.h>

int AdditionR(int No)
{
    static int i = 0;
    int iDigit = 0;
    static int Sum = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        Sum = Sum + iDigit;
        No = No /10;
        AdditionR(No);
    }
    return Sum;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    ret = AdditionR(value);
    printf("Addition of Digit is : %d\n",ret);

    return 0;
}