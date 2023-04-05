//write program which accept  arrays  from user and Display below pattern
//Input :  8   9  7  6  4   2   4
//Outut :  * * * * * * * *
//         * * * * * * * * *
//         * * * * * * *         
//         * * * * * *
//         * * * *
//         * *  
//         * * * * 



#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int size)
{
    int iCnt = 0;
    int j = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        for(j = 0; j < Arr[iCnt]; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}


int main()
{
	int No1 = 0;
    int *ptr1 = NULL;
    int iCnt = 0;
    
	printf("Enter the Size of first array\n");
	scanf("%d",&No1);

    ptr1 = (int *)malloc(sizeof(int) * No1);

    printf("Elements of first array\n");
    for(iCnt = 0; iCnt < No1; iCnt++)
    {
        scanf("%d",&ptr1[iCnt]);
    }
    
	
    Display(ptr1,No1);
    
	return 0;
}