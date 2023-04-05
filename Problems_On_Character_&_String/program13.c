// Write a program which accept string from user and return diff between frequency of small character andfrequency of capital character.
// input :  "MarvellouS"  
// output :   6   (8-2)

#include<stdio.h>

int Difference(char *str)
{
    int iCapitalCnt = 0;
    int iSmallCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A')  && (*str <= 'Z'))
        {
            iCapitalCnt++;    
        }
        else
        {
            iSmallCnt++;
        }
        str++;
    }
    return iSmallCnt - iCapitalCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);    

    printf("Difference are : %d\n",iRet);

    return 0;
}