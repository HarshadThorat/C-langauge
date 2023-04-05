// Write a program which accept N from user and print first 5 multiples of N.
// input = 4
// output = 4   8   12   16   20


#include<stdio.h>

void MultipleDisplay(int iNo)
{ 
	int iCnt = 0;
    int i = 5;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <= 5; iCnt++)
	{
		printf("%d\t",iNo*iCnt);
	}
}

int main()
{
	int iValue= 0;

	printf("Enter the Number\n");
	scanf("%d",&iValue);

	MultipleDisplay(iValue);
	
	return 0;
} 