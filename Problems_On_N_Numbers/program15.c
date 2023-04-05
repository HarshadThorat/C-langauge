// Accept N number from user and return the product of all Odd elements.
//input   N :  6
//        eletments : 15 66 3 70 10 88
// output :  45 

#include<stdio.h>
#include<stdlib.h>

int ProductOfOddN(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0) 
        {
            iMult = iMult * Arr[iCnt];  
        }
    }
    return iMult;
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

    iRet = ProductOfOddN(ptr,iSize);
    printf("Product of all Odd elements are : %d\n",iRet);

    free(ptr);

    return 0;
}