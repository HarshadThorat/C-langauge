//write a program which accept one number from user and print that number of even number on screen
// input : 7
// output : 2 4 6 8 10 12 14


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2 *(iCnt));
    }    
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}