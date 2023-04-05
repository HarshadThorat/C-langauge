// write a program which Accept N number from user and accept one another number as NO,check Whether No is present or not.
//input   N :  6
//        NO : 66
//        eletments : 85 66 3 66 93 88
// output : Present


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int Arr[], int Size, int No)
{
    int iCnt = 0;
    bool flag = false;
    
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            flag = true;
        }
    }
    return flag;
}


int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    bool ret = false;
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

    ret = Check(ptr,size,value);
    if(ret == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is Not present");
    }

    return 0;

}