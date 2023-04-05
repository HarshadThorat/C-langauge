// Write a program which accept string from user and display only digits from that string.
// input :  Marve89llous121  
// output :   89121

#include<stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0')  && (*str <= '9'))
        {
            printf("%c\t",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);    

    return 0;
}