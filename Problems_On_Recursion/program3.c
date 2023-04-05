//write a Recursive program which display below pattern?
// output : 5  4  3  2  1

#include<stdio.h>

void DisplayR()
{
    static int i = 5;
            
    if(i > 0)
    {
        printf("%d\t",i);
        i--;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}