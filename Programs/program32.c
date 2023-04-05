// Write a program which accept number from user and display its table
// Input: 2
// Output: 2   4  6  8  10 12 14 16 18 20


#include<stdio.h>

int DisplayTable(int iNo)
{
	int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
   
}

int main()
{
	int iValue= 0;

	printf("Enter the Number\n");
	scanf("%d",&iValue);

	DisplayTable(iValue);
    
	
	return 0;
} 