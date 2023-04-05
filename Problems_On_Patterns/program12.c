// Accept number of Rows and number of Column from user and display below pattern
/* 
input : iRow = 4      iCol = 4
   
A   B   C   D
a   b   c   d
A   B   C   D
a   b   c   d

*/ 

#include<stdio.h>

void Display(int iRow, int iCol)    
{
	int i = 0;
    int j = 0;
    char ch1 = 'A';
    char ch2 = 'a';

	for(i = 1; i <= iRow; i++)
	{
        for(j = 1; j <= iCol; j++)
        {
           if(i % 2 != 0)
           {
                printf("%c\t",ch1);
                ch1++;
           }
           else
           {
                printf("%c\t",ch2);
                ch2++;
           }
        }
        printf("\n");
        ch1 = 'A';
        ch2 = 'a';		
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