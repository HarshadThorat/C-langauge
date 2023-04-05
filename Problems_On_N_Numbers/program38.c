//write program which accept two arrays from user and display Odd contents of each array
//Input : 2  9  6  5  2  3
//        45 6  12 18 23 4 

//Outut : 9  5  3 
//        45  23  



#include<stdio.h>
#include<stdlib.h>

void Display(int Arr1[], int size1, int Arr2[], int size2)
{
    int iCnt = 0;

    printf("Odd Elements are\n");
    for(iCnt = 0; iCnt < size1; iCnt++)
    {
        if(Arr1[iCnt] % 2 != 0)
        {
            printf("%d\t",Arr1[iCnt]);
        }
    }
    printf("\n");

    printf("Odd Elements are\n");
    for(iCnt = 0; iCnt < size2; iCnt++)
    {
        if(Arr2[iCnt] % 2 != 0)
        {
            printf("%d\t",Arr2[iCnt]);
        }
    }
}



int main()
{
	int No1 = 0;
    int No2 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int iCnt = 0;


	printf("Enter the Size of first array\n");
	scanf("%d",&No1);

    ptr1 = (int *)malloc(sizeof(int) * No1);

    printf("Elements of first array\n");
    for(iCnt = 0; iCnt < No1; iCnt++)
    {
        scanf("%d",&ptr1[iCnt]);
    }
    
	printf("Enter the Size of second array\n");
	scanf("%d",&No2);

    ptr2 = (int *)malloc(sizeof(int) * No2);

    printf("Elements of second array\n");
    for(iCnt = 0; iCnt < No2; iCnt++)
    {
        scanf("%d",&ptr2[iCnt]);
    }
	Display(ptr1,No1,ptr2,No2);


	return 0;
}