// write a program which accept number from user and display its factor in decreasing order??
// input = 12
// output =  6 4 3 2 1


#include<stdio.h>
int FactReverse(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }    
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    FactReverse(iValue);
    


    return 0;
}