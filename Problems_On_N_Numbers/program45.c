//write java program which accept two arrays from user and copy the content of that array into another array and check array is pallindrome or not
//Input : 12  57  28  3 
//        99 23  54 58 6 67 

//Outut :  12  57  28  3 99 23  54 58 6 67
//          Array not pallindrome


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ArrayPallindrome(int Arr1[], int size1, int Arr2[], int size2)
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

    int start = 0;
    int end = length-1;
    bool flag = true;

    while(start < end)
    {
        if(Arr3[start] != Arr3[end])
        {
            flag = false;
            break;
        }

        start++;
        end--;
    }
    return flag;
}



int main()
{
	int No1 = 0;
    int No2 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int iCnt = 0;
    bool ret = false;

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
	
    
    ret = ArrayPallindrome(ptr1,No1,ptr2,No2);
    if(ret == true)
    {
        printf("\nArray is Pallindrome\n");
    }
    else
    {
        printf("\nArray is NOT Pallindrome\n");
    }

	return 0;
}