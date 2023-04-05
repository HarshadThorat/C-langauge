//write a Recursive program which accept number from user and return its Factorial?
// Input :  5
// output :  120


#include<stdio.h>

int FactorialR(int No)
{
    static int i = 1;
    static int Mult = 1;

    if(i <= No)
    {
        Mult = Mult * i;
        i++;
        FactorialR(No);
    }
    return Mult;
}

int main()
{
    int value = 0;
    int ret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    ret = FactorialR(value);
    printf("Factorial is : %d\n",ret);

    return 0;
}