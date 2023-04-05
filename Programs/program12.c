//write a program which accept one number from user and print  factors of that number
// input : 24
// output : 1  2  4  6  8  12  


#include<stdio.h>

void DisplayFactors(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i == 0))
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

    DisplayFactors(iValue);
    
    return 0;
}