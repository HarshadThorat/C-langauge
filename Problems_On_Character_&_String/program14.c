// Write a program which accept string from user and check whether it contain vowels in it or not.
// input :  "Marvellous"            "xyz"  
// output :   true                  false

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return true;
        }
       
        str++;
    }
    
}

int main()
{
    char Arr[20];
    bool bRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowels(Arr);    
    if(bRet == true)
    {
        printf("It Contain vowels\n");
    }
    else
    {
        printf("There is no vowels\n");
    }
    

    return 0;
}