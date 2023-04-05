// Accept N numbers from user and Display all such elements which are divisible by 5. 
// input : N:    6
// Elements : 85   66 3  80  93  88
// output : 85   80

#include<stdio.h>
#include<stdlib.h>

void DisplayDivFive(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d",Arr[iCnt]);
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

    DisplayDivFive(ptr,iLength);

    free(ptr);

    return 0;
}
