//write a Recursive program which accept number from user and return the product of its digit?
//Input : 523
// output : 30


#include<stdio.h>

int ProductR(int No)
{
    static int i = 1;
    int iDigit = 0;
    static int Mult = 1;

    if(No != 0)
    {
        iDigit = No % 10;
        Mult = Mult * iDigit;
        No = No /10;
        ProductR(No);
    }
    return Mult;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    ret = ProductR(value);
    printf("Product of Digit is : %d\n",ret);

    return 0;
}