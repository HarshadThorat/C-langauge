//write program which accept two arrays from user and display Minimum Element of each array
//Input : 2  9  6  5  2  3
//        9  3  5  5

//Outut : 2  
//        3
          
     
          

#include<stdio.h>
#include<stdlib.h>

void MinElementDisplay(int Arr1[], int size1, int Arr2[], int size2)
{
    int Min1 = Arr1[0]; 
    int Min2 = Arr2[0]; 
    int iCnt = 0;

    for(iCnt = 0; iCnt < size1; iCnt++)
    {
        if(Arr1[iCnt] < Min1)
        {
            Min1 = Arr1[iCnt];
        }
    }
    printf("Minimum elements of the first array is : %d\n",Min1);
    
    
    for(iCnt = 0; iCnt < size2; iCnt++)
    {
        if(Arr2[iCnt] < Min2)
        {
            Min2 = Arr2[iCnt];
        }
    }
    printf("Minimum elements of the second array is : %d\n",Min2);
    
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
	
    MinElementDisplay(ptr1,No1,ptr2,No2);


	return 0;
}