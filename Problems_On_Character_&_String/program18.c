// Write a program which accept string from user and convert it into toggle the case.
// input :  "Marvellous Multi OS"  
// output :   mARVELLOUS mULTI os

#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')  && (*str <= 'z'))
        {
           *str = *str - 32;     
        }
        else if((*str >= 'A')  && (*str <= 'Z'))
        {
           *str = *str + 32;     
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);    

    printf("String is Converted into lower case : %s\n",Arr);

    return 0;
}