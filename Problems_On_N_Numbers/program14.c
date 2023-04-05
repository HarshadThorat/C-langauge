// Accept N nmber from user and accept range, Display all elements from that range.
//input   N :  6
//        Start : 60
//        End   : 90
//        eletments : 85 66 3 76 93 88
// output :  66  76  88 

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[],int iLength,int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd)) 
        {
            printf("%d\t",Arr[iCnt]);  
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));   
    
    printf("Elements are\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Start point\n");
    scanf("%d",&iValue1);

    printf("Enter the End point\n");
    scanf("%d",&iValue2);

    DisplayRange(ptr,iSize,iValue1,iValue2);
       
    free(ptr);

    return 0;
}