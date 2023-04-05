// Accept character from user. 
//If it is capital then display all the characters from the input characters till Z. 
//If input character is small then print all the characters in reverse order till a.
// In other cases return directly.
// Input: Q
// Output: Q R S T U V W X Y Z
// Input: m
// Output: m k j h g f e d c b a

#include<stdio.h>

void Display(char ch)
{
    while((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\t",ch); 
        ch--;
    }

    while((ch <= 'Z') && (ch >= 'A'))
    {
        printf("%c\t",ch); 
         ch++;        
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