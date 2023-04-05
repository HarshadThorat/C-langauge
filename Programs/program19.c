// Write a program which accept name from user and print that name.
//input = Marvellous
//output = Marvellous 


#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter your full name\n");
    scanf("%[^'\0']s",Name);

    printf("your Name is %s",Name);

    return 0;
}