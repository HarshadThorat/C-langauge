//write program which accept two arrays from user and display Summation of each array
//Input : 2  9  6  5  2  3
//        9  3  5  5

//Outut : 27
//        22
          

#include<stdio.h>
#include<stdlib.h>

void AddDisplay(int Arr1[], int size1, int Arr2[], int size2)
{
    int Sum1 = 0; 
    int Sum2 = 0; 
    int iCnt = 0;

    for(iCnt = 0; iCnt < size1; iCnt++)
    {
        Sum1 = Sum1 + Arr1[iCnt];
    }
    printf("Addition of first array is : %d\n",Sum1);

    for(iCnt = 0; iCnt < size2; iCnt++)
    {
        Sum2 = Sum2 + Arr2[iCnt];
    }
    printf("Addition of second array is : %d\n",Sum2);
    
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
	
    AddDisplay(ptr1,No1,ptr2,No2);


	return 0;
}