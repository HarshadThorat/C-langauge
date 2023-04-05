//write a program which accept N from user and display all such elements which are divisible by 5?
// input  :  N = 6
//           Elements  = 85 66 3 80 93 88
// output :  85 80              


#include<stdio.h>
#include<stdlib.h>


void DivBy5(int Arr[], int Size)
{
    int iCnt = 0;
    
    printf("Elements Divisible by 5\n");
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
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

    DivBy5(ptr,size);

    



}