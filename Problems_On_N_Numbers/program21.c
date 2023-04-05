//write a program which accept N from user and return difference between summation of Even elements and summation of Odd elements
// input  :  N = 6
//           Elements  = 85 66 3 80 93 88
// output :  53 (234-181)              


#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int Size)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return (iEvenSum - iOddSum);
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

    ret = Difference(ptr,size);

    printf("Difference is  : %d\n",ret);




}