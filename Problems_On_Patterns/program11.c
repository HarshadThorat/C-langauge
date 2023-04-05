// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 4
   
A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D

*/ 

#include<stdio.h>

void Display(int iRow, int iCol)    
{
	int i = 0;
    int j = 0;
    char ch = 'A';
    

	for(i = 1; i <= iRow; i++)
	{
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
        ch = 'A';		
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