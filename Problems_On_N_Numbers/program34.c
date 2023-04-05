//write program which accept marks of N student from user and display class of each student
//Input : 67.3   45.8   88.9    77.5    55.2  
//Outut :   67.5   first class
//          45.8    pass class 
//          89.9    first class with distinction
//          77.5    first class with distinction
//          55.2    second class 

#include<stdio.h>
#include<stdlib.h>

void Percentage(float Arr[], int size)
{
    int iCnt = 0;
    
    printf("Marks are : \n"); 
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(Arr[iCnt] < 35)
        {
            printf("fail\n");    
        }
        if((Arr[iCnt] > 35) && (Arr[iCnt] < 50))
        {
            printf("Pass Class\n");    
        }
        if((Arr[iCnt] > 50) && (Arr[iCnt] < 60))
        {
            printf("second Class\n");    
        }
        if((Arr[iCnt] > 60) && (Arr[iCnt] < 75))
        {
            printf("fist Class\n");    
        }
        else if(Arr[iCnt] > 75)
        {
            printf("First class with Distinction\n");    
        }
    }
}

int main()
{
	int No1 = 0;
    float *ptr1 = NULL;
    int iCnt = 0;
   
	printf("Enter the Size of first array\n");
	scanf("%d",&No1);

    ptr1 = (float *)malloc(sizeof(float) * No1);

    printf("Elements of array\n");
    for(iCnt = 0; iCnt < No1; iCnt++)
    {
        scanf("%f",&ptr1[iCnt]);
    }
    
    Percentage(ptr1,No1);
    
	return 0;
}