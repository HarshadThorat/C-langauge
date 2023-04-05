//Accept character from user and check whether it is Capital or not(A-Z)
// input : F             f
// output : true        false 

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
        printf("It is Capital character\n");
    }
    else
    {
        printf("It is not a Capital character\n");
    }
   
    return 0 ;
}