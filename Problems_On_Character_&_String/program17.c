// Write a program which accept string from user and convert it into upper case.
// input :   marvellous multi os
// output : "Marvellous Multi OS" 

#include<stdio.h>

int struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')  && (*str <= 'z'))
        {
           *str = *str - 32;     
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);    

    printf("String is Converted into lower case : %s\n",Arr);

    return 0;
}