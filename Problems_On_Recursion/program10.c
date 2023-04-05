//write a Recursive program which display below pattern?
// output : A  B C D E F  

#include<stdio.h>

void DisplayR(int No)
{
    static int i = 1;
    static char ch = 'a';
    
    if(i <= No)
    {
        printf("%c\t",ch);
        ch++;
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