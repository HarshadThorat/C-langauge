//Accept character from user and check whether it is Small case or not(a-z)
// input :   d            D
// output : true        false 

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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
        printf("It is Small case character\n");
    }
    else
    {
        printf("It is not a Small case character\n");
    }
   
    return 0 ;
}