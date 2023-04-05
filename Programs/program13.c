//write a program which accept one number from user and print Even factors of that number
// input : 36
// output : 2  4  6  12  18


#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\n",i);
        }
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