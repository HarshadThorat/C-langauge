// write a program which accept number from user and Count the number of ON(1) bits in it without using % and / operator
//input : 11  
//output : 3

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT CountOne(UINT No)
{
    UINT iCnt = 0;

    while(No)
    {
        iCnt++;
        No = No & (No-1); 
    }
    return iCnt;
}

int main()
{
    UINT value = 0;
    UINT iret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    iret = CountOne(value);

    printf("Number of ON bits are : %d\n",iret);
    
    return 0;
}