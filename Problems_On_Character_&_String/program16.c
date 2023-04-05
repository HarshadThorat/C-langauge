// Write a program which accept string from user and convert it into lower case.
// input :  "Marvellous Multi OS"  
// output :   marvellous multi os

#include<stdio.h>

int strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')  && (*str <= 'Z'))
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

    strlwrX(Arr);    

    printf("String is Converted into lower case : %s\n",Arr);

    return 0;
}