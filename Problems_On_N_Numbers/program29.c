// Accept N nmber from user and accept range . Display all elments from that range.
//input   N :  6
//        start : 60
//        end    : 90  
//        eletments : 85 66 3 66 93 88
// output : 66 85 88


#include<stdio.h>
#include<stdlib.h>


void DisplayRange(int Arr[], int Size, int start, int end)
{
    int iCnt = 0;

    printf("Number betweenn the given Range\n");
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if((Arr[iCnt] > start) && (Arr[iCnt] < end))
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
    int value1 = 0;
    int value2 = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&size);

    ptr = (int *)malloc(sizeof(int) * size);

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Start point\n");
    scanf("%d",&value1);

    printf("Enter the end point\n");
    scanf("%d",&value2);

    DisplayRange(ptr,size,value1,value2);
    
}