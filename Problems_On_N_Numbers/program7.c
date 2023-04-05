// Accept N numbers from user and return difference between frequency of even numbers and odd numbers. 
// input : N:    6
// Elements : 85   66 3  80  93  88  90
// output :   1  (4-3)

#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[], int iSize)
{
    int iCnt = 0;
    int ifrequencyEven = 0;
    int ifrequencyOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0) 
        {
            ifrequencyEven++;
        }
        else
        {
            ifrequencyOdd++;
        }
    }
    return (ifrequencyEven - ifrequencyOdd);
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FrequencyDiff(ptr,iLength);
    printf("frequency of Difference is : %d\n",iRet);
    
    free(ptr);
    return 0;
}
