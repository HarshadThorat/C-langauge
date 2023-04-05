// Accept character from user and display its ASCII value in decimal, octal, hexadecimal format.
// input : A          Decimal       65
//                    Octal         0101
//                    Hexadecimal   0X41        
#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Decimal value : %d\n",ch);
        printf("Hexadecimal value : %x\n",ch);
        printf("Octal value : %o\n",ch);         
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Decimal value : %d\n",ch);
        printf("Hexadecimal value : %x\n",ch);
        printf("Octal value : %o\n",ch);         
    }
   
}

int main()
{
    char cValue = '0';

    printf("Enter one Character\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0 ;
}