//write a program which accept string from user and display it in reverse order
// input  :  MarvellouS
// output :  SuollevraM              


#include<stdio.h>
#include<stdbool.h>


void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}


int main()
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("String After Reverse Operation : %s\n",Arr);

}