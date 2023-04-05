//Accept character from user and check whether it is Special symbol or not(A-Z)
// input :   %            d
// output : true        false 

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= '!') && (ch <= '*'))
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
    char cValue = '0';
    bool bRet = false;

    printf("Enter one Character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);
    if(bRet == true)
    {
        printf("It is Special Symbol\n");
    }
    else
    {
        printf("It is not a Special Symbol\n");
    }
   
    return 0 ;
}