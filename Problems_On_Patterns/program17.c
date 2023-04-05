// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 5
   
2   4    6    8    10
1   3    5    7    9
2   4    6    8    10
1   3    5    7    9

*/ 

#include<stdio.h>

void Display(int iRow, int iCol)    
{
	int i = 0;
    int j = 0;

	for(i = 1; i <= iRow; i++)
	{
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",2*j);
            }
            else
            {
                printf("%d\t",(2*j)-1);
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