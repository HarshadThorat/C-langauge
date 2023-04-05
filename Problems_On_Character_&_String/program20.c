// Write a program which accept string from user and Count number of white spaces.
// input :  Marvellous        harsh ad  
// output :   0                1

#include<stdio.h>

int CountWhiteSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
             iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpace(Arr);    
    printf("Number f white spaces are : %d\n",iRet);

    return 0;
}