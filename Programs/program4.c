//Accept one number and check whether it is divisible by 5 or not


#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    
    if(iNo % 5 == 0)
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
    int iValue= 0; 
    bool bRet = false;

    printf("Enter the value\n");
    scanf("%d",&iValue);


    bRet = Check(iValue);

    if(bRet == true)
    {
        printf(" divisible by five\n");
    }
    else
    {
        printf("not  divisible by five\n");
    }
    return 0;
}