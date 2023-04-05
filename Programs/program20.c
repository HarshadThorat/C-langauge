// Write a program which accept one number from user and check whether that number is greater than 100 or not.
// input = 101               39
// output = Greater        Smaller 


#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    int bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}