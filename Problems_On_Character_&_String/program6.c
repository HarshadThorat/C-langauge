// Write a program which display ASCII table.table contain symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255.


#include<stdio.h>

int main()
{
    int i = 0;

    printf("_________________\n");
    printf("ASCII table\n");
    printf("_________________\n");
    
    printf("Charcter\t Decimal\t Hex\t Octal\n");

    for(i = 0; i <= 127; i++)
    {
        printf("%c\t %d\t %x\t %o\n",i,i,i,i);
    }

    printf("\n_________________\n");

    return 0;
}