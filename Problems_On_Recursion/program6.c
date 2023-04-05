//write a Recursive program which display below pattern?
// output : * * * * *

#include<stdio.h>

void DisplayR(int No)
{
    static int i = 0;

    if(i < No)
    {
        printf("*\t");
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