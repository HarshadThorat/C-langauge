//write program which accept  arrays from user and Reverse each number of that array 
//Input : 12  57  28  3 
//        

//Outut :  3 28 57 12 
//          

#include<stdio.h>
#include<stdlib.h>

void Reverse(int Arr[], int size)
{
    int start = 0;
    int end = size-1;
    int temp = 0;

    while(start < end)
    {
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
    
    printf("Array after the Reverse operation : \n"); 
    for(int iCnt = 0; iCnt < size; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
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
    
	
    Reverse(ptr1,No1);
    
	return 0;
}