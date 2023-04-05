//write a Recursive program which display below pattern?
// output : A  B  C  D  E  F


#include<stdio.h>

void DisplayR()
{
    static int i = 1;
    static char ch = 'A';

    if(i <= 6)
    {
        printf("%c\t",ch);
        ch++;
        i++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}