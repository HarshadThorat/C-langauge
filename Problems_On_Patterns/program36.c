//write program which accept String from user and display below pattern?
// Input :  Hello
//  H e l l o
//  H e l l o
//  H e l l o
//  H e l l o
//  H e l l o


#include<stdio.h>

void Display(char str[])    
{
	int i = 0;
    int j = 0;  
    
	for(i = 0; i <= str[i]; i++)
	{
        for(j = 0; j <= str[j]; j++)
        {
            printf("%c\t",str[j]);
        }
        printf("\n");		
	}
}

int main()
{
	char Arr[20];

	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);

	Display(Arr);
	
	return 0;
}