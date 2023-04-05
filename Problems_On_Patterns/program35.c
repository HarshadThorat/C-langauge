//write program which accept number of rows and columns from user and display below pattern?
// Input :  iRow = 3   iCol = 4
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
// 4 4 4 4 
 

#include<stdio.h>

void Display(int Row, int Col)    
{
	int i = 0;
    int j = 0;  
    
	for(i = 1; i <= Row; i++)
	{
        for(j = 1; j <= Col; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");		
	}
}

int main()
{
	int No1 = 0;
    int No2 = 0;

	printf("Enter the Number of Row\n");
	scanf("%d",&No1);

    
	printf("Enter the Number of Column\n");
	scanf("%d",&No2);

	Display(No1 ,No2);
	
	return 0;
}