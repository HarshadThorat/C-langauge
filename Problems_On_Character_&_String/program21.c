// write a program which accept string from user and accept one character. check whether is present in string or not.
// input : Marvellous
// output : (e)  true

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
   
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;    
        }
        str++;
    }
}

int main()
{
    char Arr[10];
    bool bRet = false;;
    char cValue = '\0';
    

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr,'a');

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);    

    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}