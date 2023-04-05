// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 5      iCol = 5
   
a  b   c   d   e
1  2   3   4   5 
a  b   c   d   e
1  2   3   4   5
a  b   c   d   e

*/ 

#include<stdio.h>

void Display(int iRow, int iCol)    
{
	int i = 0;
    int j = 0;
    char Ch = 'a';

	for(i = 1; i <= iRow; i++)
	{
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",Ch);
                Ch++;                
            }
            else
            {
                printf("%d\t",j);  
            }
            
        }
        printf("\n");
        Ch = 'a';
        		
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