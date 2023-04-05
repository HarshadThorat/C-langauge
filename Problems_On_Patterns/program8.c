// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 3      iCol = 5
   
5  4  3   2   1
5  4  3   2   1
5  4  3   2   1

*/ 

#include<stdio.h>

void Display(int iRow, int iCol)    
{
	int i = 0;
    int j = 0;

	for(i = 1; i <= iRow; i++)
	{
        for(j = iCol; j >= 1 ; j--)
        {
            printf("%d\t",j);
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