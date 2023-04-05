// Accept N  nmber from user and Display summation of digits of each number.
//input   N :  6
//        eletments : 8225  665   3  76  953   858
// output :  17  17   3   13    17   21    

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSum = 0;
    int idigit = 0;
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        while(Arr[iCnt] > 0)
        {
            idigit = Arr[iCnt] % 10;
            iSum  = iSum + idigit;
            Arr[iCnt] = Arr[iCnt] / 10; 
        }
        printf("%d\t",iSum);
        iSum = 0;
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