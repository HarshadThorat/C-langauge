// Accept N nmber from user and accept one another number as NO,check Whether No is present or not.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : Present

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNO)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNO) 
        {
            iFrequency++;  
        }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iSize = 0;
    int iValue = 0;
    bool bRet = false;

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

    bRet = Check(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    
    free(ptr);

    return 0;
}