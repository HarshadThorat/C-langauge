//write a program which accept N from user and display all such elements which are Multiples of 11?
// input  :  N = 6
//           Elements  = 85 66 55 15 93 88
// output :  66 55 88              


#include<stdio.h>
#include<stdlib.h>


void MultipleOf11(int Arr[], int Size)
{
    int iCnt = 0;
    
    printf("Elements are Multiple of 11\n");
    for(iCnt = 0; iCnt < Size; iCnt++)
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
    int ret = 0;
    int size = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&size);

    ptr = (int *)malloc(sizeof(int) * size);

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    MultipleOf11(ptr,size);

    return 0;
}