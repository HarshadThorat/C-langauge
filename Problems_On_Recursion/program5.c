//write a Recursive program which display below pattern?
// output : a b c d e f


#include<stdio.h>

void DisplayR()
{
    static int i = 1;
    static char ch = 'a';

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