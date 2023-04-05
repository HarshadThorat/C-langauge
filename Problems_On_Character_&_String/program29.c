//write a program which accept string from user and check whether it contain vowels or not
// input  :  marvellous       xyz
// output :  true              false



#include<stdio.h>
#include<stdbool.h>


bool CheckVowels(char *str)
{
    bool flag = false;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            flag = true;
        }
        str++;
    }
    return flag;;
}


int main()
{
    char Arr[20];
    bool ret = false;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    ret = CheckVowels(Arr);
    if(ret == true)
    {
        printf("It contain Vowels");
    }
    else
    {
        printf("It Not contail Vowels");
    }
}