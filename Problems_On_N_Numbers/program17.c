// Accept N nmber from user and return the Smallst Number.
//input   N :  6
//        eletments : 85 66 3 66 93 88
// output :  3 

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin) 
        {
            iMin = Arr[iCnt];  
        }
    }
    return iMin;
}

int main()
{
    int *ptr= NULL;
    int iCnt = 0;
    int iSize = 0;
    int iRet = 0;
    
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));   
    
    printf("Elements are\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr,iSize);
    printf("Smallest number is  : %d\n",iRet);

    free(ptr);

    return 0;
}