//Write a program which 2 strings from user and check whether contents of two strings are equal or not.
// Input : Marvellous Infosystem
//         Marvellous Infosystem
//         
//output : TRUE


#include<stdio.h>

int StrCmpX(char *str1 , char *str2)
{
    int flag = 0;
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char Arr[60];
    char Brr[30];
    int ret = 0;

    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Second String\n");
    scanf(" %[^'\n']s",Brr);

    ret = StrCmpX(Arr,Brr);
    if(ret == 0)
    {
        printf("Content of String is equal\n");
    }
    else
    {
        printf("Content of String is NOT equal\n");
    }

    
    return 0;
    
}