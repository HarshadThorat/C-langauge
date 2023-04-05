//write a Recursive program which accept number from user and display below pattern?
// output : 5  *  4  *  3  *  2  *  1  *
//incomplete

#include<stdio.h>

void DisplayR(int No)
{
    static int i = No;
    
    if(i <= No)
    {
        printf("*\t%d\t",i);
        i++;
        DisplayR(No);
    }
}

int main()
{
    int value = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    DisplayR(value);

    return 0;
}