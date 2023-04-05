// Write a program which accept number from user and print that number of $ and * on screen .
// input = 5
// output = $ * $ * $ * $ * $ *


#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("$\t*\t");
	}
}

int main()
{
	int iValue= 0;

	printf("Enter the Number\n");
	scanf("%d",&iValue);

	Display(iValue);
	
	return 0;
} 