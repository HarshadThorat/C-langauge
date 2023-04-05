//Accept character from user and check whether it is alphabate or not(A-Z a-z)
// input : F           &
// output : true        false 

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(((ch >= 'a') && (ch <= 'z'))  || ((ch >= 'A') && (ch <= 'Z')))
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
        printf("It is Alphabate\n");
    }
    else
    {
        printf("It is not a Alphabate\n");
    }
   
    return 0 ;
}