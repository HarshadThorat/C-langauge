// Accept number from user and display below pattern
// input : 8
// output : 2   4   6   8  10  12  14  16

#include<stdio.h>

void Display(int iNo)    
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",2*iCnt);
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