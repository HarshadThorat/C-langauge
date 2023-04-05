// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 4
   
1  2  3  4
2  3  4  5
3  4  5  6
4  5  6  7

*/ 

#include<stdio.h>

void Display(int iRow, int iCol)    
{
	int i = 0;
    int j = 1;
    

	for(i = 1; i <= iRow; i++)
	{
        for(j = 1; j <= iCol; j++)
        {
			if(i == 1)
			{
				printf("%d\t",j);
			}
			else if(i == 2)
			{
				printf("%d\t",j + 1);
			}
			else if(i == 3)
			{
				printf("%d\t",j + 2);
			}
			else
			{
				printf("%d\t",j + 3);
			}
			 
        }
        printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
    int iValue2 = 0;

	printf("Enter the Number\n");
	scanf("%d",&iValue1);

    
	printf("Enter the Number\n");
	scanf("%d",&iValue2);

	Display(iValue1 ,iValue2);
	
	return 0;
} 