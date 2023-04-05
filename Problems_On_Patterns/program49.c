//write program which accept String from user and display below pattern?
// Input :  Row = 6  Col = 6

// *   *   *   *   *   *
// *   #   #   #   *   * 
// *   #   #   *   #   *
// *   #   *   #   #   *
// *   *   #   #   #   *
// *   *   *   *   *   *


#include<stdio.h>

void Display(int Row, int Col)    
{
	int i = 0;
    int j = 0;  
    
	for(i = 1; i <= Row; i++)
	{
        for(j = 1; j <= Col; j++)
        {
            if((i == 1) || (i == Row) || (j == 1) || (j == Col))
            {
                printf("*\t");
            }
            else if(i+j == 7)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
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