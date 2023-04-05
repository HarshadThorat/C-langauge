//Write a program which 2 strings from user and check whether first N character of two strings are equal or not.
// Input : Marvellous Infosystem
//         Marvellous Infosystem
//         10
//output : TRUE


#include<stdio.h>

int StrCmpX(char *str1 , char *str2, int No)
{
    int flag = 0;
    int i = 0;

    while((i < No))
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
    int value = 0;
    int ret = 0;

    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Second String\n");
    scanf(" %[^'\n']s",Brr);

    printf("Enter the number\n");
    scanf("%d",&value);


    ret = StrCmpX(Arr,Brr,value);
    if(ret == 0)
    {
        printf("String of first 10 character are equal\n");
    }
    else
    {
        printf("String of first 10 character are NOT equal\n");
    }

    
    return 0;
    
}