// Accept N  number from user and Display all such number which contain 3 digits in it.
//input   N :  6
//        eletments : 8225  665   3  76  953   858
// output :  665   935  858 

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0;
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= 100) && (Arr[iCnt] < 1000))
        {
            printf("%d\t",Arr[iCnt]);  
        }
    }
}

int main()
{
    int *ptr= NULL;
    int iCnt = 0;
    int iSize = 0;
    
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));   
    
    printf("Elements are\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Digits(ptr,iSize);
    
    free(ptr);

    return 0;
}