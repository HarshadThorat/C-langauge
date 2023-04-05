//write program which accept number of rows and columns from user and display below pattern?
// Input :  iRow = 4   iCol = 4
//  A B C D
//  a b c d  
//  A B C D
//  a b c d

#include<stdio.h>

void Display(int Row, int Col)    
{
	int i = 0;
    int j = 0;  
    char ch1 = 'A';
    char ch2 = 'a';

	for(i = 1; i <= Row; i++)
	{
        for(j = 1; j <= Col; j++)
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
	int No1 = 0;
    int No2 = 0;

	printf("Enter the Number of Row\n");
	scanf("%d",&No1);

    
	printf("Enter the Number of Column\n");
	scanf("%d",&No2);

	Display(No1 ,No2);
	
	return 0;
}