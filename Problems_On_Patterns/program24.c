// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 6      iCol = 5
   
*   *   *   *    *
*    @  @   @    *
*    @  @   @    *
*    @  @   @    *
*    @  @   @    *
*   *   *   *    *
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
			if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("@\t");
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