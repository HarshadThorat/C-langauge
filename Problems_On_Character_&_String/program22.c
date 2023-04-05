// write a program which accept string from user and accept one character. return frequency of that character.
// input : Marvellous   Multi OS
// output : (M)  2    

#include<stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;    
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    char cValue = '\0';    

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);


    iRet = CountFrequency(Arr,cValue);    

    printf("Frequency of letters are : %d\n",iRet);

    return 0;
}