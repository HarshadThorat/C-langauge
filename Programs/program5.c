// Accept number from user and print that number of * in program

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 5;

    Accept(iValue);

    return 0;

}