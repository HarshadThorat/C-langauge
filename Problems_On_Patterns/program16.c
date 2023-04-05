// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 4
   
1   2   3   4
5   6   7   8
9   1   2   3
4   5   6   7 

*/ 

#include<stdio.h>

void Display(int iRow, int iCol)    
{
	int i = 0;
    int j = 0;
    int iNo = 1;
    

	for(i = 1; i <= iRow; i++)
	{
        for(j = 1; j <= iCol; j++)
        {
            if(iNo <= 9)
            {
                printf("%d\t",iNo++);
            }
            else
            {
                iNo = 1;
                printf("%d\t",iNo++);
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