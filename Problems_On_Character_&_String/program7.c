// Accept character from user. if character is small display its corresponding capital character.
// and if it small then display its corresponding capital.in other cases display as it is??
// Input :    Q      m      4        %              
// output :   q      M      4        %

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c",ch = ch - 32);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c",ch = ch + 32);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '0';
    int iRet = 0;

    printf("Enter one Character\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0 ;
}