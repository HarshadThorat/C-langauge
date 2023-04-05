// Accept N nmber from user and accept one another number as NO,return index of Last occurance of that NO.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : 3

#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[],int iLength,int iNO)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNO) 
        {
            break;  
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));   
    
    printf("Elements are\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number you have to find\n");
    scanf("%d",&iValue);

    iRet = LastOccurance(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurance of number is %d\n",iRet);
    }
    
    free(ptr);

    return 0;
}