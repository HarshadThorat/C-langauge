// Accept N numbers from user and check whether that number contains 11 in it or not. 
// input : N:    6
// Elements : 85   66  11  80  93  88                  85   66  3  80  93  88            
// output :   11 is present                            11 is absent

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11) 
        {
            return true;   
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iLength = 0;
    bool bRet = false;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr,iLength);
    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
    
    free(ptr);
    return 0;
}
