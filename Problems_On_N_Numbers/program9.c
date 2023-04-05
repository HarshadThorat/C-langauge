// Accept N numbers from user and return frequency of 11 form it. 
// input : N:    6
// Elements : 85   11 3 15 11 111                   85   66  3  15  93  88            
// output :    2                                     0

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int ifrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11) 
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

    iRet = Frequency(ptr,iLength);
    printf("Frequency of 11 is : %d\n",iRet);
    
    free(ptr);
    return 0;
}
