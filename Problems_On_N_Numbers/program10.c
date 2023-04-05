// Accept N numbers from user and accept one another number as NO,  return frequency of NO form it. 
// input : N:    6
//  NO : 66
// Elements : 85  66  3   66  93  88                   85   11  3  15  11  111            
// output :    2                                       0

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iSize, int iNO)
{
    int iCnt = 0;
    int ifrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNO) 
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
    int iValue = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number you have to find\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iLength,iValue);
    printf("Frequency is : %d\n",iRet);
    
    free(ptr);
    return 0;
}
