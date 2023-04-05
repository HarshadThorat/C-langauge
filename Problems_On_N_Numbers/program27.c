// Accept N nmber from user and accept one another number as NO,return index of first occurance of that NO.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : 1

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int FirstOccurance(int Arr[], int Size, int No)
{
    int iCnt = 0;
    int ipos = -1;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            ipos = iCnt;
            break;
        }
    }

    if(ipos == -1)
    {
        return -1;
    }
    else
    {
        return ipos;
    }
    
}


int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int ret = 0;
    int size = 0;
    int value = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&size);

    ptr = (int *)malloc(sizeof(int) * size);

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number you have to find\n");
    scanf("%d",&value);

    ret = FirstOccurance(ptr,size,value);
    if(ret == -1)
    {
        printf("Number is Not Occur");
        
    }
    else
    {
        printf("Number is Occurs at Index : %d\n",ret);
    }



}