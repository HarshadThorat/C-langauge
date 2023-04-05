// Accept N numbers from user and return frequency of even numbers. 
// input : N:    6
// Elements : 85   66 3  80  93  88
// output :   3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int ifrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0) 
        {
            ifrequency++;
        }
    }
    return ifrequency;
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

    iRet = CountEven(ptr,iLength);
    printf("frequency of Even numbers are : %d\n",iRet);
    
    free(ptr);
    return 0;
}
