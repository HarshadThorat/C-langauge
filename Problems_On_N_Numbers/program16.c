// Accept N nmber from user and return the Largest Number.
//input   N :  6
//        eletments : 85 66 3 66 93 88
// output :  93 

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax) 
        {
            iMax = Arr[iCnt];  
        }
    }
    return iMax;
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

    iRet = Maximum(ptr,iSize);
    printf("Largest number is  : %d\n",iRet);

    free(ptr);

    return 0;
}