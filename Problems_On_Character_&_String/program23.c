// write a program which accept string from user and accept one character. return index of first occurance of that character.
// input : Marvellous   Multi OS
// output : (M)  0

#include<stdio.h>
#include<stdbool.h>

int FirstChar(char str[], char ch)
{
    int i = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            return i;
        }
    }   
}

int main()
{
    char Arr[10];
    char cValue = '\0'; 
    int iRet = 0;   

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr,'a');

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue); 
    printf("character location is %d",iRet);

    return 0;
}