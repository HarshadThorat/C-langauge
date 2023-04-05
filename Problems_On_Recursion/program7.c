//write a Recursive program which display below pattern?
// output : 1 2 3 4 5 

#include<stdio.h>

void DisplayR(int No)
{
    static int i = 1;

    if(i <= No)
    {
        printf("%d\t",i);
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