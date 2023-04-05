// Accept N numbers from user and return difference between summation of even and summation of odd elements. 
// input : N:    6
// Elements : 85   66 3  80  93  88
// output : 53  (234-181)


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Sum of Even numbers are : %d\n",iEvenSum);
	printf("Odd numbers are : %d\n",iOddSum);

    return(iEvenSum - iOddSum);
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iLength);
    printf("Difference is : %d\n",iRet);

    free(ptr);

    return 0;
}