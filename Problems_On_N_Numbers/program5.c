// Accept N numbers from user and Display all such elements which are multiples of 11. 
// input : N:    6
// Elements : 85   66 3  55  93  88
// output :   66 55 88

#include<stdio.h>
#include<stdlib.h>

void MultipleOf11(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0) 
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iLength = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    MultipleOf11(ptr,iLength);

    free(ptr);

    return 0;
}
