//write program which accept two arrays from user and form new array which is combination of first and second array
//Input : 12  57  28  3 
//        99 23  54 58 6 67 

//Outut : 12  57  28  3 99 23  54 58 6 67
//          



#include<stdio.h>
#include<stdlib.h>

void Display(int Arr1[], int size1, int Arr2[], int size2)
{
    int length = size1 + size2;
    int *Arr3 = (int *)malloc(sizeof(int) * length);
    int iCnt = 0;

    for(iCnt = 0; iCnt < size1; iCnt++)
    {
        Arr3[iCnt] = Arr1[iCnt];
    }
    for(iCnt = 0; iCnt < size2; iCnt++)
    {
        Arr3[iCnt + size1] = Arr2[iCnt];
    }

    printf("Elements in the NEW ARRAY\n");
    for(iCnt = 0; iCnt < length; iCnt++)
    {
        printf("%d\t",Arr3[iCnt]);
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